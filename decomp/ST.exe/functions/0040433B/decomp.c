
int __cdecl
thunk_FUN_00637350(int param_1,int param_2,int param_3,int param_4,uint param_5,undefined2 param_6,
                  undefined2 param_7,undefined4 param_8,uint param_9)

{
  byte bVar1;
  char cVar2;
  int *this;
  uint uVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  short sVar7;
  uint uVar8;
  int iVar9;
  short sVar10;
  int iVar11;
  short sVar12;
  uint *puVar13;
  int *piVar14;
  int iVar15;
  bool bVar16;
  int aiStack_58 [5];
  uint *puStack_44;
  uint auStack_38 [3];
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  
  iStack_8 = 0;
  sVar10 = (short)(param_1 >> 0x1f);
  if (param_1 < 0) {
    iVar11 = (short)(((short)(param_1 / 0xc9) + sVar10) -
                    (short)((longlong)param_1 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    iVar11 = (int)(short)(((short)(param_1 / 0xc9) + sVar10) -
                         (short)((longlong)param_1 * 0x28c1979 >> 0x3f));
  }
  sVar10 = (short)(param_2 >> 0x1f);
  if (param_2 < 0) {
    iVar5 = (short)(((short)(param_2 / 0xc9) + sVar10) -
                   (short)((longlong)param_2 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    iVar5 = (int)(short)(((short)(param_2 / 0xc9) + sVar10) -
                        (short)((longlong)param_2 * 0x28c1979 >> 0x3f));
  }
  sVar10 = (short)(param_3 >> 0x1f);
  if (param_3 < 0) {
    iStack_c = (short)(((short)(param_3 / 200) + sVar10) -
                      (short)((longlong)param_3 * 0x51eb851f >> 0x3f)) + -1;
  }
  else {
    iStack_c = (int)(short)(((short)(param_3 / 200) + sVar10) -
                           (short)((longlong)param_3 * 0x51eb851f >> 0x3f));
  }
  uVar8 = iVar5 - param_4;
  if ((int)uVar8 < 0) {
    uVar8 = 0;
  }
  iStack_1c = iVar11 - param_4;
  if (iStack_1c < 0) {
    iStack_1c = 0;
  }
  iStack_18 = iVar5 + 1 + param_4;
  if (DAT_007fb242 < iStack_18) {
    iStack_18 = (int)DAT_007fb242;
  }
  iStack_14 = iVar11 + 1 + param_4;
  if (DAT_007fb240 < iStack_14) {
    iStack_14 = (int)DAT_007fb240;
  }
  iStack_10 = iStack_c + -1;
  if (iStack_10 < 0) {
    iStack_10 = 0;
  }
  iStack_c = iStack_c + 2;
  if (5 < iStack_c) {
    iStack_c = 5;
  }
  puVar13 = auStack_38;
  for (iVar11 = 7; iVar11 != 0; iVar11 = iVar11 + -1) {
    *puVar13 = 0;
    puVar13 = puVar13 + 1;
  }
  auStack_38[2] = param_5;
  uStack_2a = param_6;
  uStack_2c = param_7;
  auStack_38[0] = param_9;
  auStack_38[1] = param_8;
  iVar11 = iStack_c;
  iVar5 = iStack_10;
  sVar10 = DAT_007fb240;
  if ((int)uVar8 < iStack_18) {
    do {
      iVar9 = iVar5;
      iVar15 = iStack_1c;
      param_9 = uVar8;
      if (iStack_1c < iStack_14) {
        do {
          iVar5 = iVar9;
          _param_6 = iVar15;
          if (iVar9 < iVar11) {
            do {
              sVar12 = (short)iVar15;
              if (((((((-1 < sVar12) && (sVar12 < sVar10)) && (sVar4 = (short)uVar8, -1 < sVar4)) &&
                    ((sVar4 < DAT_007fb242 && (sVar7 = (short)iVar9, -1 < sVar7)))) &&
                   ((sVar7 < DAT_007fb244 &&
                    ((this = *(int **)(DAT_007fb248 +
                                      ((int)sVar4 * (int)sVar10 + (int)sVar7 * (int)DAT_007fb246 +
                                      (int)sVar12) * 8), this != (int *)0x0 &&
                     (iVar11 = (**(code **)(*this + 0xf0))(), uVar8 = param_9, iVar11 != 0)))))) &&
                  ((uint)this[9] < 8)) &&
                 ((DAT_00802a38 == 0 || ((byte)(&DAT_008087e9)[this[9] * 0x51] < 8)))) {
                bVar1 = *(byte *)(this + 9);
                param_8 = CONCAT31(param_8._1_3_,bVar1);
                if (DAT_00808a8f == '\0') {
                  if (bVar1 == (byte)param_5) {
LAB_006375fd:
                    iVar11 = 0;
                  }
                  else {
                    uVar6 = param_5 & 0xff;
                    uVar3 = (uint)bVar1;
                    cVar2 = *(char *)((int)&DAT_00808a4f + uVar3 * 8 + uVar6);
                    if ((cVar2 == '\0') &&
                       (*(char *)((int)&DAT_00808a4f + uVar6 * 8 + uVar3) == '\0')) {
                      iVar11 = -2;
                    }
                    else if ((cVar2 == '\x01') &&
                            (*(char *)((int)&DAT_00808a4f + uVar6 * 8 + uVar3) == '\0')) {
                      iVar11 = -1;
                    }
                    else if ((cVar2 == '\0') &&
                            (*(char *)((int)&DAT_00808a4f + uVar6 * 8 + uVar3) == '\x01')) {
                      iVar11 = 1;
                    }
                    else {
                      if ((cVar2 != '\x01') ||
                         (*(char *)((int)&DAT_00808a4f + uVar6 * 8 + uVar3) != '\x01'))
                      goto LAB_006375fd;
                      iVar11 = 2;
                    }
                  }
                  bVar16 = iVar11 < 0;
                }
                else {
                  bVar16 = (&DAT_008087ea)[(param_5 & 0xff) * 0x51] !=
                           (&DAT_008087ea)[(uint)bVar1 * 0x51];
                  iVar15 = _param_6;
                }
                if ((bVar16) &&
                   (iVar11 = (**(code **)(*this + 0xf8))(), uVar8 = param_9, iVar11 != 0)) {
                  thunk_FUN_00416270(this,(undefined2 *)((int)&param_4 + 2),
                                     (undefined2 *)((int)&param_3 + 2),
                                     (undefined2 *)&stack0x0000001e);
                  iVar11 = FUN_006aced8((int)param_4._2_2_,(int)param_3._2_2_,param_1,param_2);
                  uVar8 = param_9;
                  if (iVar11 < 0x28b) {
                    piVar14 = aiStack_58;
                    for (iVar11 = 8; iVar11 != 0; iVar11 = iVar11 + -1) {
                      *piVar14 = 0;
                      piVar14 = piVar14 + 1;
                    }
                    aiStack_58[2] = this[6];
                    aiStack_58[3] = 4;
                    aiStack_58[4] = 0x110;
                    puStack_44 = auStack_38;
                    (**(code **)*this)(aiStack_58);
                    iStack_8 = iStack_8 + 1;
                    uVar8 = param_9;
                    iVar15 = _param_6;
                  }
                }
              }
              iVar9 = iVar9 + 1;
              iVar11 = iStack_c;
              iVar5 = iStack_10;
              sVar10 = DAT_007fb240;
            } while (iVar9 < iStack_c);
          }
          iVar15 = iVar15 + 1;
          iVar9 = iVar5;
        } while (iVar15 < iStack_14);
      }
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < iStack_18);
  }
  return iStack_8;
}

