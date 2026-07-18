
void __thiscall thunk_FUN_00567510(void *this,int param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  float fVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int iVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uStack_b0;
  undefined4 auStack_ac [16];
  undefined4 uStack_6c;
  undefined4 auStack_68 [16];
  uint uStack_28;
  int iStack_24;
  void *pvStack_20;
  int iStack_1c;
  uint uStack_18;
  int iStack_14;
  int *piStack_10;
  int iStack_c;
  int iStack_8;
  
  if (*(int *)((int)this + 0xf8b) == 0) {
    return;
  }
  pvStack_20 = this;
  if (DAT_00807363 == '\0') {
    if ((((*(int *)((int)this + 0x10d9) == param_1) && (*(int *)((int)this + 0x10dd) == param_2)) &&
        (*(int *)((int)this + 0x10e5) == param_3)) && (*(int *)((int)this + 0x10e1) == param_4)) {
      return;
    }
    *(int *)((int)this + 0x10d9) = param_1;
    *(int *)((int)this + 0x10dd) = param_2;
    *(int *)((int)this + 0x10e5) = param_3;
    *(int *)((int)this + 0x10e1) = param_4;
    if ((param_3 == 0) || (param_3 == 2)) {
      iVar4 = 1;
    }
    else {
      iVar4 = -1;
    }
    *(int *)((int)this + 0x10e9) = iVar4;
    *(int *)((int)this + 0x10ed) = param_2 - iVar4 * param_1;
    uStack_b0 = DAT_00858df8;
    DAT_00858df8 = &uStack_b0;
    iVar4 = __setjmp3(auStack_ac,0,unaff_EDI,unaff_ESI);
    pvVar3 = pvStack_20;
    if (iVar4 != 0) {
      DAT_00858df8 = (undefined4 *)uStack_b0;
      return;
    }
    iStack_8 = 2;
    piStack_10 = (int *)((int)pvStack_20 + 0xe23);
    do {
      iVar4 = iStack_8;
      FUN_006c1f00(iStack_8,&uStack_18,(uint *)0x0);
      iVar5 = iStack_8;
      if ((uStack_18 == 1) &&
         ((((3 < iVar4 && (iVar4 < 0xb)) || ((0x11 < iVar4 && (iVar4 < 0x15)))) ||
          ((10 < iVar4 && (iVar4 < 0x12)))))) {
        iVar9 = *(int *)((int)pvVar3 + 0x10e1) * 0x10;
        iStack_14 = (*(int *)(&DAT_007c9794 + iVar9) * (DAT_0080730e + 4000)) / 100 + -4000;
        iStack_1c = piStack_10[1];
        iStack_24 = *piStack_10;
        uVar6 = *(int *)((int)pvVar3 + 0x10d9) - iStack_24;
        uVar10 = (int)uVar6 >> 0x1f;
        uVar7 = *(int *)((int)pvVar3 + 0x10dd) - iStack_1c;
        iVar13 = (uVar6 ^ uVar10) - uVar10;
        uVar6 = (int)uVar7 >> 0x1f;
        iVar4 = (uVar7 ^ uVar6) - uVar6;
        iVar11 = iVar13;
        if (iVar13 <= iVar4) {
          iVar11 = iVar4;
        }
        iVar11 = iVar11 + 1;
        *(int *)((int)pvVar3 + 0x10f1) = iVar11;
        if (*(int *)(&DAT_007c9788 + iVar9) < iVar11) {
          iVar11 = *(int *)(&DAT_007c9788 + iVar9);
        }
        iVar8 = iStack_14;
        if (*(int *)(&DAT_007c9790 + iVar9) < iVar11) {
          iVar11 = iVar13;
          if (iVar13 <= iVar4) {
            iVar11 = iVar4;
          }
          iVar11 = iVar11 + 1;
          *(int *)((int)pvVar3 + 0x10f1) = iVar11;
          if (*(int *)(&DAT_007c9788 + iVar9) < iVar11) {
            iVar11 = *(int *)(&DAT_007c9788 + iVar9);
          }
          if (*(int *)(&DAT_007c978c + iVar9) < iVar11) {
            uVar6 = iStack_14 * 2 - 8000;
            uVar7 = (int)uVar6 / 3 + ((int)uVar6 >> 0x1f);
            uVar6 = uVar6 >> 0x1f;
          }
          else {
            if (iVar4 < iVar13) {
              iVar4 = iVar13;
            }
            iVar4 = iVar4 + 1;
            *(int *)((int)pvVar3 + 0x10f1) = iVar4;
            iStack_c = *(int *)(&DAT_007c9788 + iVar9);
            if (iVar4 <= *(int *)(&DAT_007c9788 + iVar9)) {
              iStack_c = iVar4;
            }
            iVar4 = (4000U - iStack_14) * 2;
            uStack_28 = (4000U - iStack_14 & 0x7fffffff) >> 0x1e;
            uVar6 = iStack_14 * 2 - 8000;
            uVar7 = uVar6 >> 0x1f;
            uVar6 = (int)uVar6 / 3 + ((int)uVar6 >> 0x1f) +
                    (int)((iVar4 / 3 + (iVar4 >> 0x1f) + uStack_28 + iStack_14) *
                         (*(int *)(&DAT_007c978c + iVar9) - iStack_c)) /
                    (*(int *)(&DAT_007c978c + iVar9) - *(int *)(&DAT_007c9790 + iVar9));
          }
          iVar8 = uVar7 + uVar6;
        }
        FUN_006c1ce0(iStack_8,iVar8);
        iVar4 = *(int *)((int)pvVar3 + 0x10e9) * iStack_24 + *(int *)((int)pvVar3 + 0x10ed);
        uVar6 = iVar4 - iStack_1c >> 0x1f;
        iVar11 = (int)(((iVar4 - iStack_1c ^ uVar6) - uVar6) * 7) / 10;
        iVar13 = *(int *)((int)pvVar3 + 0x10e1) * 0x10;
        *(int *)((int)pvVar3 + 0x10f1) = iVar11;
        iVar9 = *(int *)(&DAT_007c9788 + iVar13);
        if (iVar11 <= *(int *)(&DAT_007c9788 + iVar13)) {
          iVar9 = iVar11;
        }
        if (iVar9 < *(int *)(&DAT_007c9790 + iVar13)) {
          *(int *)((int)pvVar3 + 0x10f1) = iVar11;
          iStack_c = *(int *)(&DAT_007c9788 + iVar13);
          if (iVar11 <= *(int *)(&DAT_007c9788 + iVar13)) {
            iStack_c = iVar11;
          }
          iVar11 = (int)(1000 / (longlong)*(int *)(&DAT_007c9790 + iVar13)) * iStack_c;
        }
        else {
          iVar11 = 1000;
        }
        *(int *)((int)pvVar3 + 0x10f1) = iVar4;
        if (iVar4 == iStack_1c) {
          iVar4 = 0;
        }
        else {
          if ((*(int *)((int)pvVar3 + 0x10e5) == 0) || (*(int *)((int)pvVar3 + 0x10e5) == 3)) {
            bVar1 = iVar4 <= iStack_1c;
          }
          else {
            bVar1 = iStack_1c <= iVar4;
          }
          iVar4 = (bVar1 - 1 & 2) - 1;
        }
        FUN_006c1d80(iVar5,iVar4 * iVar11);
        iVar4 = iVar5;
      }
      iStack_8 = iVar4 + 1;
      piStack_10 = piStack_10 + 3;
    } while (iStack_8 < 0x20);
    DAT_00858df8 = (undefined4 *)uStack_b0;
    return;
  }
  if ((((*(int *)((int)this + 0x10d9) == param_1) && (*(int *)((int)this + 0x10dd) == param_2)) &&
      (*(int *)((int)this + 0x10e5) == param_3)) && (*(int *)((int)this + 0x10e1) == param_4)) {
    return;
  }
  *(int *)((int)this + 0x10e5) = param_3;
  *(int *)((int)this + 0x10d9) = param_1;
  *(int *)((int)this + 0x10dd) = param_2;
  uStack_6c = DAT_00858df8;
  DAT_00858df8 = &uStack_6c;
  iVar4 = __setjmp3(auStack_68,0,unaff_EDI,unaff_ESI);
  pvVar3 = pvStack_20;
  if (iVar4 != 0) {
    DAT_00858df8 = (undefined4 *)uStack_6c;
    return;
  }
  switch(*(undefined4 *)((int)pvStack_20 + 0x10e5)) {
  case 0:
    iStack_8 = param_4 * 5 + 5;
    fVar2 = (float)iStack_8;
    uVar15 = 0xbf350481;
    uVar14 = 0xbf350481;
    break;
  case 1:
    iStack_8 = param_4 * 5 + 5;
    fVar2 = (float)iStack_8;
    uVar15 = 0xbf350481;
    uVar14 = 0x3f350481;
    break;
  case 2:
    iStack_8 = param_4 * 5 + 5;
    fVar2 = (float)iStack_8;
    uVar15 = 0x3f350481;
    uVar14 = 0x3f350481;
    break;
  case 3:
    iStack_8 = param_4 * 5 + 5;
    fVar2 = (float)iStack_8;
    uVar15 = 0x3f350481;
    uVar14 = 0xbf350481;
    break;
  default:
    goto switchD_005675bc_default;
  }
  FUN_006c2160((float)*(int *)((int)pvStack_20 + 0x10d9),(float)*(int *)((int)pvStack_20 + 0x10dd),
               fVar2,uVar14,uVar15,0,0,0,0x3f800000);
switchD_005675bc_default:
  if (*(int *)((int)pvVar3 + 0x10e1) != param_4) {
    *(int *)((int)pvVar3 + 0x10e1) = param_4;
    iVar4 = 2;
    piVar12 = (int *)((int)pvVar3 + 0xe23);
    do {
      FUN_006c1f00(iVar4,&uStack_18,(uint *)0x0);
      if (uStack_18 == 1) {
        if (((3 < iVar4) && (iVar4 < 0xb)) || ((0x11 < iVar4 && (iVar4 < 0x15)))) {
          iVar5 = *(int *)((int)pvVar3 + 0x10e1) * 0x10;
          FUN_006c2220(iVar4,(float)*piVar12,(float)piVar12[1],0,
                       (float)*(int *)(&DAT_007c9790 + iVar5),(float)*(int *)(&DAT_007c9788 + iVar5)
                      );
        }
        if ((10 < iVar4) && (iVar4 < 0x12)) {
          iVar5 = *(int *)((int)pvVar3 + 0x10e1) * 0x10;
          FUN_006c2220(iVar4,(float)*piVar12,(float)piVar12[1],0,
                       (float)*(int *)(&DAT_007c9790 + iVar5),(float)*(int *)(&DAT_007c978c + iVar5)
                      );
        }
      }
      iVar4 = iVar4 + 1;
      piVar12 = piVar12 + 3;
    } while (iVar4 < 0x20);
  }
  DAT_00858df8 = (undefined4 *)uStack_6c;
  return;
}

