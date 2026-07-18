
uint * FUN_0043f7b0(byte param_1,int *param_2,int param_3,int param_4,int param_5,int *param_6,
                   int param_7,int param_8,int param_9)

{
  byte bVar1;
  char cVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  int local_14;
  int local_c;
  int local_8;
  
  bVar6 = param_1;
  local_8 = param_3 - (int)param_6;
  iVar7 = param_4 + param_7;
  param_4 = param_4 - param_7;
  iVar11 = param_5 - param_8;
  if (local_8 < 0) {
    local_8 = 0;
  }
  local_c = param_3 + (int)param_6;
  if (DAT_007fb240 + -1 < param_3 + (int)param_6) {
    local_c = DAT_007fb240 + -1;
  }
  if (param_4 < 0) {
    param_4 = 0;
  }
  param_7 = iVar7;
  if (DAT_007fb242 + -1 < iVar7) {
    param_7 = DAT_007fb242 + -1;
  }
  if (iVar11 < 0) {
    iVar11 = 0;
  }
  iVar7 = param_5 + param_8;
  if (DAT_007fb244 + -1 < param_5 + param_8) {
    iVar7 = DAT_007fb244 + -1;
  }
  puVar8 = FUN_006ae290((uint *)0x0,0xf,4,10);
  iVar10 = DAT_007fb240 * param_4 + local_8 + (iVar11 + -1) * (int)DAT_007fb246;
  if (iVar11 <= iVar7) {
    local_14 = (iVar7 - iVar11) + 1;
    do {
      iVar10 = iVar10 + DAT_007fb246;
      iVar7 = iVar10 - DAT_007fb240;
      if (param_4 <= param_7) {
        iVar11 = (param_7 - param_4) + 1;
        do {
          iVar7 = iVar7 + DAT_007fb240;
          if (local_8 <= local_c) {
            _param_1 = (local_c - local_8) + 1;
            iVar12 = iVar7 * 8 + -8;
            do {
              piVar3 = *(int **)(iVar12 + 8 + DAT_007fb248);
              if ((piVar3 != (int *)0x0) &&
                 ((((iVar9 = piVar3[8], param_6 = piVar3, iVar9 == 0x14 || (iVar9 == 1000)) ||
                   (iVar9 == 0x3e9)) && (param_2 != piVar3)))) {
                if (param_9 == 0) {
                  bVar1 = *(byte *)(piVar3 + 9);
                  if (DAT_00808a8f == '\0') {
                    if (bVar1 == bVar6) {
LAB_0043f9bd:
                      iVar9 = 0;
                    }
                    else {
                      uVar4 = (uint)bVar1;
                      uVar5 = (uint)bVar6;
                      cVar2 = *(char *)((int)&DAT_00808a4f + uVar4 * 8 + uVar5);
                      if ((cVar2 == '\0') &&
                         (*(char *)((int)&DAT_00808a4f + uVar5 * 8 + uVar4) == '\0')) {
                        iVar9 = -2;
                      }
                      else if ((cVar2 == '\x01') &&
                              (*(char *)((int)&DAT_00808a4f + uVar5 * 8 + uVar4) == '\0')) {
                        iVar9 = -1;
                      }
                      else if ((cVar2 == '\0') &&
                              (*(char *)((int)&DAT_00808a4f + uVar5 * 8 + uVar4) == '\x01')) {
                        iVar9 = 1;
                      }
                      else {
                        if ((cVar2 != '\x01') ||
                           (*(char *)((int)&DAT_00808a4f + uVar5 * 8 + uVar4) != '\x01'))
                        goto LAB_0043f9bd;
                        iVar9 = 2;
                      }
                    }
                    bVar13 = iVar9 < 0;
                  }
                  else {
                    bVar13 = (&DAT_008087ea)[(uint)bVar6 * 0x51] !=
                             (&DAT_008087ea)[(uint)bVar1 * 0x51];
                  }
                  if (!bVar13) goto LAB_0043f9fa;
                  iVar9 = (**(code **)(*piVar3 + 0xf8))();
                }
                else {
                  iVar9 = (**(code **)(*piVar3 + 0xf8))();
                }
                if (iVar9 == 1) {
                  FUN_006ae1c0(puVar8,&param_6);
                }
              }
LAB_0043f9fa:
              piVar3 = *(int **)(iVar12 + 0xc + DAT_007fb248);
              if (((piVar3 != (int *)0x0) && (param_6 = piVar3, piVar3[8] == 0x1ae)) &&
                 (param_2 != piVar3)) {
                if (param_9 == 0) {
                  bVar1 = *(byte *)(piVar3 + 9);
                  param_8 = CONCAT31(param_8._1_3_,bVar1);
                  if (DAT_00808a8f == '\0') {
                    if (bVar1 == bVar6) {
LAB_0043fad9:
                      iVar9 = 0;
                    }
                    else {
                      uVar4 = (uint)bVar1;
                      uVar5 = (uint)bVar6;
                      cVar2 = *(char *)((int)&DAT_00808a4f + uVar4 * 8 + uVar5);
                      if ((cVar2 == '\0') &&
                         (*(char *)((int)&DAT_00808a4f + uVar5 * 8 + uVar4) == '\0')) {
                        iVar9 = -2;
                      }
                      else if ((cVar2 == '\x01') &&
                              (*(char *)((int)&DAT_00808a4f + uVar5 * 8 + uVar4) == '\0')) {
                        iVar9 = -1;
                      }
                      else if ((cVar2 == '\0') &&
                              (*(char *)((int)&DAT_00808a4f + uVar5 * 8 + uVar4) == '\x01')) {
                        iVar9 = 1;
                      }
                      else {
                        if ((cVar2 != '\x01') ||
                           (*(char *)((int)&DAT_00808a4f + uVar5 * 8 + uVar4) != '\x01'))
                        goto LAB_0043fad9;
                        iVar9 = 2;
                      }
                    }
                    bVar13 = iVar9 < 0;
                  }
                  else {
                    bVar13 = (&DAT_008087ea)[(uint)bVar6 * 0x51] !=
                             (&DAT_008087ea)[(uint)bVar1 * 0x51];
                  }
                  if (!bVar13) goto LAB_0043fb16;
                  iVar9 = (**(code **)(*piVar3 + 0xf8))();
                }
                else {
                  iVar9 = (**(code **)(*piVar3 + 0xf8))();
                }
                if (iVar9 == 1) {
                  FUN_006ae1c0(puVar8,&param_6);
                }
              }
LAB_0043fb16:
              _param_1 = _param_1 + -1;
              iVar12 = iVar12 + 8;
            } while (_param_1 != 0);
          }
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
      }
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  if (puVar8[3] == 0) {
    FUN_006ae110((byte *)puVar8);
    puVar8 = (uint *)0x0;
  }
  return puVar8;
}

