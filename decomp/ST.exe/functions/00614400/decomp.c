
void __thiscall FUN_00614400(void *this,AnonShape_00614400_1B90EA7E *param_1)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  short sVar4;
  short sVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  short sVar10;
  short sVar11;
  bool bVar12;
  int local_10;
  byte local_c;
  undefined3 uStack_b;
  int local_8;
  
  *(undefined4 *)((int)this + 0x1fb) = param_1->field_002D;
  *(undefined2 *)((int)this + 0x1ff) = param_1->field_0031;
  *(undefined2 *)((int)this + 0x1e9) = param_1->field_001A;
  *(undefined2 *)((int)this + 0x1eb) = param_1->field_001C;
  *(undefined2 *)((int)this + 0x1ed) = param_1->field_001E;
  *(undefined2 *)((int)this + 0x1ef) = param_1->field_0020;
  *(undefined2 *)((int)this + 0x1f1) = param_1->field_0022;
  *(undefined2 *)((int)this + 499) = param_1->field_0024;
  *(undefined4 *)((int)this + 0x207) = param_1->field_0043;
  sVar10 = *(short *)((int)this + 0x1e9);
  if (sVar10 < 0) {
    sVar10 = ((sVar10 / 0xc9 + (sVar10 >> 0xf)) - (short)((longlong)(int)sVar10 * 0x28c1979 >> 0x3f)
             ) + -1;
  }
  else {
    sVar10 = (sVar10 / 0xc9 + (sVar10 >> 0xf)) - (short)((longlong)(int)sVar10 * 0x28c1979 >> 0x3f);
  }
  *(short *)((int)this + 0x215) = sVar10;
  sVar10 = *(short *)((int)this + 0x1eb);
  if (sVar10 < 0) {
    sVar10 = ((sVar10 / 0xc9 + (sVar10 >> 0xf)) - (short)((longlong)(int)sVar10 * 0x28c1979 >> 0x3f)
             ) + -1;
  }
  else {
    sVar10 = (sVar10 / 0xc9 + (sVar10 >> 0xf)) - (short)((longlong)(int)sVar10 * 0x28c1979 >> 0x3f);
  }
  *(short *)((int)this + 0x217) = sVar10;
  sVar10 = *(short *)((int)this + 0x1ed);
  if (sVar10 < 0) {
    sVar10 = ((sVar10 / 200 + (sVar10 >> 0xf)) - (short)((longlong)(int)sVar10 * 0x51eb851f >> 0x3f)
             ) + -1;
  }
  else {
    sVar10 = (sVar10 / 200 + (sVar10 >> 0xf)) - (short)((longlong)(int)sVar10 * 0x51eb851f >> 0x3f);
  }
  *(short *)((int)this + 0x219) = sVar10;
  sVar10 = param_1->field_0026;
  sVar4 = *(short *)((int)this + 0x1ef);
  *(short *)((int)this + 0x1f5) =
       (sVar10 / 0xf + (sVar10 >> 0xf)) - (short)((longlong)(int)sVar10 * 0x88888889 >> 0x3f);
  if (sVar4 < 0) {
    sVar10 = ((sVar4 / 0xc9 + (sVar4 >> 0xf)) - (short)((longlong)(int)sVar4 * 0x28c1979 >> 0x3f)) +
             -1;
  }
  else {
    sVar10 = (sVar4 / 0xc9 + (sVar4 >> 0xf)) - (short)((longlong)(int)sVar4 * 0x28c1979 >> 0x3f);
  }
  sVar4 = *(short *)((int)this + 0x1f1);
  *(short *)((int)this + 0x2c5) = sVar10;
  if (sVar4 < 0) {
    local_8 = (short)((sVar4 / 0xc9 + (sVar4 >> 0xf)) -
                     (short)((longlong)(int)sVar4 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    local_8 = (int)(short)((sVar4 / 0xc9 + (sVar4 >> 0xf)) -
                          (short)((longlong)(int)sVar4 * 0x28c1979 >> 0x3f));
  }
  *(short *)((int)this + 0x2c7) = (short)local_8;
  sVar5 = *(short *)((int)this + 499);
  if (sVar5 < 0) {
    sVar11 = ((sVar5 / 200 + (sVar5 >> 0xf)) - (short)((longlong)(int)sVar5 * 0x51eb851f >> 0x3f)) +
             -1;
  }
  else {
    sVar11 = (sVar5 / 200 + (sVar5 >> 0xf)) - (short)((longlong)(int)sVar5 * 0x51eb851f >> 0x3f);
  }
  *(short *)((int)this + 0x2cf) = sVar5;
  *(short *)((int)this + 0x2c9) = sVar11;
  *(undefined2 *)((int)this + 0x2cb) = *(undefined2 *)((int)this + 0x1ef);
  *(short *)((int)this + 0x2cd) = sVar4;
  iVar9 = param_1->field_0043;
  *(int *)((int)this + 0x2d1) = iVar9;
  if (((((((-1 < sVar10) && (sVar10 < SHORT_007fb240)) && (-1 < (short)local_8)) &&
        (((short)local_8 < SHORT_007fb242 && (-1 < sVar11)))) &&
       ((sVar11 < SHORT_007fb244 &&
        ((piVar6 = *(int **)(DAT_007fb248 +
                            ((int)SHORT_007fb246 * (int)sVar11 +
                             (int)SHORT_007fb240 * (int)(short)local_8 + (int)sVar10) * 8),
         piVar6 != (int *)0x0 && (piVar6[6] == iVar9)))))) &&
      (iVar9 = (**(code **)(*piVar6 + 0xf0))(), iVar9 != 0)) &&
     (((uint)piVar6[9] < 8 &&
      ((PTR_00802a38 == (STPlaySystemC *)0x0 || ((byte)(&DAT_008087e9)[piVar6[9] * 0x51] < 8)))))) {
    bVar1 = *(byte *)(piVar6 + 9);
    bVar2 = *(byte *)((int)this + 0x1d9);
    local_8 = CONCAT31(local_8._1_3_,bVar1);
    _local_c = CONCAT31(uStack_b,bVar2);
    if (DAT_00808a8f == '\0') {
      if (bVar1 == bVar2) {
LAB_0061478b:
        iVar9 = 0;
      }
      else {
        uVar7 = (uint)bVar1;
        uVar8 = (uint)bVar2;
        cVar3 = *(char *)((int)&DAT_00808a4f + uVar7 * 8 + uVar8);
        if ((cVar3 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar8 * 8 + uVar7) == '\0')) {
          iVar9 = -2;
        }
        else if ((cVar3 == '\x01') && (*(char *)((int)&DAT_00808a4f + uVar8 * 8 + uVar7) == '\0')) {
          iVar9 = -1;
        }
        else if ((cVar3 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar8 * 8 + uVar7) == '\x01')) {
          iVar9 = 1;
        }
        else {
          if ((cVar3 != '\x01') || (*(char *)((int)&DAT_00808a4f + uVar8 * 8 + uVar7) != '\x01'))
          goto LAB_0061478b;
          iVar9 = 2;
        }
      }
      bVar12 = iVar9 < 0;
    }
    else {
      bVar12 = (&DAT_008087ea)[(uint)bVar2 * 0x51] != (&DAT_008087ea)[(uint)bVar1 * 0x51];
    }
    if ((bVar12) && (iVar9 = (**(code **)(*piVar6 + 0xf8))(), iVar9 != 0)) {
      *(int *)((int)this + 0x2d1) = piVar6[6];
      goto LAB_006147e6;
    }
  }
  iVar9 = FUN_006e62d0(PTR_00802a38,*(int *)((int)this + 0x2d1),&local_10);
  if (iVar9 == -4) {
    *(undefined4 *)((int)this + 0x2d1) = 0;
  }
  else {
    *(undefined4 *)((int)this + 0x2d1) = *(undefined4 *)(local_10 + 0x18);
  }
LAB_006147e6:
  *(undefined4 *)((int)this + 0x1f7) = param_1->field_0028;
  iVar9 = DAT_007e6670;
  if ((param_1->field_0028 == 1) && (iVar9 = param_1->field_0033, param_1->field_0033 < 3)) {
    *(undefined4 *)((int)this + 0x21b) = 0x14;
    *(undefined4 *)((int)this + 0x20c) = 6;
    return;
  }
  *(int *)((int)this + 0x21b) = iVar9;
  *(undefined4 *)((int)this + 0x20c) = 6;
  return;
}

