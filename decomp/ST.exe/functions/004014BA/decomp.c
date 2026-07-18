
byte __fastcall thunk_FUN_00482db0(int *param_1,undefined4 param_2)

{
  short sVar1;
  undefined4 uVar2;
  short sVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  short sVar8;
  short sVar9;
  uint uVar10;
  short sVar11;
  undefined4 auStack_3c [2];
  undefined4 auStack_34 [2];
  undefined4 uStack_2c;
  undefined2 uStack_28;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int *piStack_14;
  ushort *puStack_10;
  short asStack_c [2];
  int *piStack_8;
  
  if (((char)param_1[0x10] != '\0') || (*(char *)((int)param_1 + 0x4d) != '\0')) {
    return 1;
  }
  sVar1 = *(short *)((int)param_1 + 0x47);
  sVar3 = *(short *)((int)param_1 + 0x4b);
  sVar8 = *(short *)((int)param_1 + 0x49);
  iVar5 = CONCAT22((short)((uint)param_2 >> 0x10),sVar8);
  if (((((sVar1 < 0) || (DAT_007fb240 <= sVar1)) || (sVar8 < 0)) ||
      ((DAT_007fb242 <= sVar8 || (sVar3 < 0)))) || (DAT_007fb244 <= sVar3)) {
    piVar4 = (int *)0x0;
  }
  else {
    iVar5 = (uint)*(byte *)((int)param_1 + 0x8e) +
            ((int)DAT_007fb246 * (int)sVar3 + (int)DAT_007fb240 * (int)sVar8 + (int)sVar1) * 2;
    piVar4 = *(int **)(DAT_007fb248 + iVar5 * 4);
  }
  if (piVar4 != param_1) {
    return 1;
  }
  sVar1 = (short)param_1[0x201];
  sVar3 = *(short *)((int)param_1 + 0x802);
  piStack_14 = (int *)CONCAT22((short)((uint)iVar5 >> 0x10),sVar3);
  if (param_1[0x1ff] == 3) {
    sVar8 = (short)param_1[0x200];
    if ((((-1 < sVar8) && (sVar8 < DAT_007fb240)) &&
        ((-1 < sVar3 && ((sVar3 < DAT_007fb242 && (-1 < sVar1)))))) && (sVar1 < DAT_007fb244)) {
      piStack_8 = *(int **)(DAT_007fb248 + 4 +
                           ((int)DAT_007fb246 * (int)sVar1 + (int)DAT_007fb240 * (int)sVar3 +
                           (int)sVar8) * 8);
LAB_00482f52:
      if ((piStack_8 != (int *)0x0) && (piStack_8[6] == param_1[0x1fd])) goto LAB_00482fa9;
    }
  }
  else {
    sVar8 = (short)param_1[0x200];
    if (((-1 < sVar8) && (sVar8 < DAT_007fb240)) &&
       ((-1 < sVar3 && (((sVar3 < DAT_007fb242 && (-1 < sVar1)) && (sVar1 < DAT_007fb244)))))) {
      piStack_8 = *(int **)(DAT_007fb248 +
                           ((int)DAT_007fb246 * (int)sVar1 + (int)DAT_007fb240 * (int)sVar3 +
                           (int)sVar8) * 8);
      goto LAB_00482f52;
    }
  }
  iVar5 = FUN_006e62d0(DAT_00802a38,param_1[0x1fd],(int *)&piStack_14);
  if (iVar5 == -4) {
    return 4;
  }
  thunk_FUN_004162f0(piStack_14,(undefined2 *)(param_1 + 0x200),(undefined2 *)((int)param_1 + 0x802)
                     ,(undefined2 *)(param_1 + 0x201));
  piStack_8 = piStack_14;
LAB_00482fa9:
  piVar4 = piStack_8;
  iVar5 = (**(code **)(*piStack_8 + 0xf8))();
  if (iVar5 == 0) {
    return 4;
  }
  if ((piVar4[8] == 0x1ae) && (iVar5 = (**(code **)(*piVar4 + 0xf4))(param_1[9]), iVar5 == 0)) {
    return 4;
  }
  thunk_FUN_00416270(piVar4,(undefined2 *)&uStack_18,(undefined2 *)&uStack_1c,asStack_c);
  iVar5 = FUN_006acf0d((int)*(short *)((int)param_1 + 0x41),(int)*(short *)((int)param_1 + 0x43),
                       (int)*(short *)((int)param_1 + 0x45),(int)(short)uStack_18,
                       (int)(short)uStack_1c,(int)asStack_c[0]);
  if ((short)param_1[0x205] < iVar5) {
    return 5;
  }
  uVar6 = (int)asStack_c[0] - (int)*(short *)((int)param_1 + 0x45);
  uVar10 = (int)uVar6 >> 0x1f;
  if ((int)(((uVar6 ^ uVar10) - uVar10) * 10) / iVar5 < 4) {
    uVar6 = thunk_FUN_004836c0(param_1);
    if ((short)uVar6 != (short)param_1[0x1b]) {
      return 9;
    }
    iVar5 = *(int *)((int)param_1 + 0x7de);
    if (((iVar5 != 0) || (0 < *(int *)((int)param_1 + 0x7a2))) &&
       ((iVar5 != 1 || (0x27 < *(int *)((int)param_1 + 0x72a))))) {
      if ((iVar5 == 0) && (*(int *)((int)param_1 + 0x7aa) < *(int *)((int)param_1 + 0x7a6))) {
        return 3;
      }
      iStack_20 = 0;
      if (*(char *)((int)param_1 + 0x2b2) != '\0') {
        puStack_10 = (ushort *)(param_1 + 0xaa);
        do {
          puVar7 = (undefined4 *)
                   thunk_FUN_0041dc40(auStack_34,*(undefined4 *)(puStack_10 + -1),puStack_10[1],
                                      (short)param_1[0x1b]);
          uVar2 = *puVar7;
          uStack_2c._2_2_ = (short)((uint)uVar2 >> 0x10);
          sVar11 = *(short *)((int)param_1 + 0x43) - uStack_2c._2_2_;
          uStack_24 = CONCAT22((short)((uint)puVar7 >> 0x10),
                               *(short *)(puVar7 + 1) + *(short *)((int)param_1 + 0x45));
          uStack_2c = (uint)*puStack_10 << 0x10;
          sVar1 = *(short *)((int)param_1 + 0x41);
          puVar7 = (undefined4 *)thunk_FUN_0041dc40(auStack_3c,uStack_2c,0,(short)param_1[0x1b]);
          uStack_2c = *puVar7;
          uStack_28 = *(undefined2 *)(puVar7 + 1);
          sVar3 = (short)uStack_2c + *(short *)((int)piStack_8 + 0x41);
          uStack_18 = CONCAT22((short)((uint)puVar7 >> 0x10),sVar3);
          sVar9 = (short)((uint)uStack_2c >> 0x10);
          sVar8 = *(short *)((int)piStack_8 + 0x43) - sVar9;
          uStack_1c = CONCAT22(sVar9,sVar8);
          asStack_c[0] = *(short *)((int)piStack_8 + 0x45);
          iVar5 = thunk_FUN_0041f9b0((short)uVar2 + sVar1,sVar11,(short)uStack_24,sVar3,sVar8,
                                     *(short *)((int)piStack_8 + 0x45),
                                     *(int *)((int)param_1 + 0x79a),(int *)&piStack_14,0);
          if (iVar5 == 0) {
            return -(piStack_8 != piStack_14) & 8;
          }
          iStack_20 = iStack_20 + 1;
          puStack_10 = puStack_10 + 3;
        } while (iStack_20 < (int)(uint)*(byte *)((int)param_1 + 0x2b2));
      }
      return 0;
    }
    return 2;
  }
  return (asStack_c[0] <= *(short *)((int)param_1 + 0x45)) + 6;
}

