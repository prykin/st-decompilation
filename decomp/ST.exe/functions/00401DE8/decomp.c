
byte __fastcall thunk_FUN_00483300(int *param_1,undefined4 param_2)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined2 extraout_var;
  uint uVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  undefined4 auStack_38 [2];
  undefined4 auStack_30 [2];
  short sStack_28;
  ushort uStack_26;
  undefined2 uStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  ushort *puStack_c;
  undefined4 uStack_8;
  
  if (*(int *)((int)param_1 + 0x7e2) == 0) {
    piVar2 = *(int **)((int)param_1 + 0x7a2);
    if (piVar2 != (int *)0x0) goto LAB_00483342;
  }
  else {
    piVar2 = param_1;
    if ((*(int *)((int)param_1 + 0x7a2) != 0) || (0x27 < *(int *)((int)param_1 + 0x72a))) {
LAB_00483342:
      piVar2 = (int *)STAllPlayersC::GetObjPtr
                                (DAT_007fa174,
                                 CONCAT31((int3)((uint)param_2 >> 8),
                                          *(undefined1 *)((int)param_1 + 0x487)),
                                 CONCAT22((short)((uint)piVar2 >> 0x10),
                                          *(undefined2 *)((int)param_1 + 0x48b)),
                                 *(undefined4 *)((int)param_1 + 0x483));
      thunk_FUN_00416270(piVar2,(undefined2 *)&uStack_10,(undefined2 *)&uStack_14,
                         (undefined2 *)&uStack_8);
      iVar3 = FUN_006acf0d((int)*(short *)((int)param_1 + 0x41),(int)*(short *)((int)param_1 + 0x43)
                           ,(int)*(short *)((int)param_1 + 0x45),(int)(short)uStack_10,
                           (int)(short)uStack_14,(int)(short)uStack_8);
      if ((short)param_1[0x205] < iVar3) {
        return (-(*(int *)((int)param_1 + 0x7e6) != 0) & 4U) + 5;
      }
      iVar4 = (**(code **)(*piVar2 + 0xf8))();
      if (((iVar4 == 0) || (iVar4 = (**(code **)(*piVar2 + 0xf0))(), iVar4 == 0)) ||
         (iVar4 = (**(code **)(*piVar2 + 0xf4))(param_1[9]), iVar4 == 0)) {
        return 3;
      }
      sVar1 = *(short *)((int)param_1 + 0x45);
      uVar5 = (int)(short)uStack_8 - (int)sVar1;
      uVar7 = (int)uVar5 >> 0x1f;
      if (3 < (int)(((uVar5 ^ uVar7) - uVar7) * 10) / iVar3) {
        return ((short)uStack_8 <= sVar1) + 6;
      }
      sVar1 = (**(code **)(*param_1 + 0x10))
                        (*(undefined2 *)((int)param_1 + 0x41),
                         CONCAT22(extraout_var,*(undefined2 *)((int)param_1 + 0x43)),
                         CONCAT22(extraout_var,sVar1),uStack_10,uStack_14,uStack_8);
      iStack_18 = (int)sVar1;
      iStack_20 = 0;
      if (*(char *)((int)param_1 + 0x2b2) != '\0') {
        puStack_c = (ushort *)(param_1 + 0xaa);
        do {
          puVar6 = (undefined4 *)
                   thunk_FUN_0041dc40(auStack_30,*(undefined4 *)(puStack_c + -1),puStack_c[1],
                                      (short)iStack_18);
          uStack_26 = (ushort)((uint)*puVar6 >> 0x10);
          uStack_1c = CONCAT22((short)((uint)puVar6 >> 0x10),
                               *(short *)((int)param_1 + 0x45) + *(short *)(puVar6 + 1));
          sVar1 = *(short *)((int)param_1 + 0x43) - uStack_26;
          sVar8 = *(short *)((int)param_1 + 0x41) + (short)*puVar6;
          uStack_26 = *puStack_c;
          sStack_28 = 0;
          puVar6 = (undefined4 *)
                   thunk_FUN_0041dc40(auStack_38,(uint)uStack_26 << 0x10,0,(short)iStack_18);
          sStack_28 = (short)*puVar6;
          uStack_26 = (ushort)((uint)*puVar6 >> 0x10);
          uStack_24 = *(undefined2 *)(puVar6 + 1);
          sVar9 = (short)uStack_10 + sStack_28;
          sVar10 = (short)uStack_14 - uStack_26;
          if (*(int *)((int)param_1 + 0x736) == 0) {
            iVar3 = STSprGameObjC::CheckRay
                              ((STSprGameObjC *)param_1,sVar8,sVar1,(short)uStack_1c,sVar9,sVar10,
                               (short)uStack_8,*(int *)((int)param_1 + 0x79a),(int *)0x0,0);
          }
          else {
            iVar3 = STSprGameObjC::CheckRay
                              ((STSprGameObjC *)param_1,sVar8,sVar1,(short)uStack_1c,sVar9,sVar10,
                               (short)uStack_8,*(int *)((int)param_1 + 0x79a),(int *)0x0,1);
          }
          if (iVar3 == 0) {
            return 8;
          }
          iStack_20 = iStack_20 + 1;
          puStack_c = puStack_c + 3;
        } while (iStack_20 < (int)(uint)*(byte *)((int)param_1 + 0x2b2));
      }
      if (iStack_18 != (short)param_1[0x1b]) {
        return 9;
      }
      if (*(int *)((int)param_1 + 0x7e2) != 0) {
        if (*(int *)((int)param_1 + 0x7aa) < *(int *)((int)param_1 + 0x7a6)) {
          return ((*(int *)((int)param_1 + 0x72a) < 0x28) - 1U & 7) + 3;
        }
        return 0;
      }
      return (*(int *)((int)param_1 + 0x7a6) <= *(int *)((int)param_1 + 0x7aa)) - 1U & 3;
    }
  }
  return 2;
}

