
void __thiscall FUN_00567510(void *this,int param_1,int param_2,int param_3,int param_4)

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
  InternalExceptionFrame local_b0;
  InternalExceptionFrame local_6c;
  uint local_28;
  int local_24;
  void *local_20;
  int local_1c;
  uint local_18;
  int local_14;
  int *local_10;
  int local_c;
  int local_8;
  
  if (*(int *)((int)this + 0xf8b) == 0) {
    return;
  }
  local_20 = this;
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
    local_b0.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_b0;
    iVar4 = Library::MSVCRT::__setjmp3(local_b0.jumpBuffer,0,unaff_EDI,unaff_ESI);
    pvVar3 = local_20;
    if (iVar4 != 0) {
      g_currentExceptionFrame = local_b0.previous;
      return;
    }
    local_8 = 2;
    local_10 = (int *)((int)local_20 + 0xe23);
    do {
      iVar4 = local_8;
      FUN_006c1f00(local_8,&local_18,(uint *)0x0);
      iVar5 = local_8;
      if ((local_18 == 1) &&
         ((((3 < iVar4 && (iVar4 < 0xb)) || ((0x11 < iVar4 && (iVar4 < 0x15)))) ||
          ((10 < iVar4 && (iVar4 < 0x12)))))) {
        iVar9 = *(int *)((int)pvVar3 + 0x10e1) * 0x10;
        local_14 = (*(int *)(&DAT_007c9794 + iVar9) * (DAT_0080730e + 4000)) / 100 + -4000;
        local_1c = local_10[1];
        local_24 = *local_10;
        uVar6 = *(int *)((int)pvVar3 + 0x10d9) - local_24;
        uVar10 = (int)uVar6 >> 0x1f;
        uVar7 = *(int *)((int)pvVar3 + 0x10dd) - local_1c;
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
        iVar8 = local_14;
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
            uVar6 = local_14 * 2 - 8000;
            uVar7 = (int)uVar6 / 3 + ((int)uVar6 >> 0x1f);
            uVar6 = uVar6 >> 0x1f;
          }
          else {
            if (iVar4 < iVar13) {
              iVar4 = iVar13;
            }
            iVar4 = iVar4 + 1;
            *(int *)((int)pvVar3 + 0x10f1) = iVar4;
            local_c = *(int *)(&DAT_007c9788 + iVar9);
            if (iVar4 <= *(int *)(&DAT_007c9788 + iVar9)) {
              local_c = iVar4;
            }
            iVar4 = (4000U - local_14) * 2;
            local_28 = (4000U - local_14 & 0x7fffffff) >> 0x1e;
            uVar6 = local_14 * 2 - 8000;
            uVar7 = uVar6 >> 0x1f;
            uVar6 = (int)uVar6 / 3 + ((int)uVar6 >> 0x1f) +
                    (int)((iVar4 / 3 + (iVar4 >> 0x1f) + local_28 + local_14) *
                         (*(int *)(&DAT_007c978c + iVar9) - local_c)) /
                    (*(int *)(&DAT_007c978c + iVar9) - *(int *)(&DAT_007c9790 + iVar9));
          }
          iVar8 = uVar7 + uVar6;
        }
        Library::DKW::SND::FUN_006c1ce0(local_8,iVar8);
        iVar4 = *(int *)((int)pvVar3 + 0x10e9) * local_24 + *(int *)((int)pvVar3 + 0x10ed);
        uVar6 = iVar4 - local_1c >> 0x1f;
        iVar11 = (int)(((iVar4 - local_1c ^ uVar6) - uVar6) * 7) / 10;
        iVar13 = *(int *)((int)pvVar3 + 0x10e1) * 0x10;
        *(int *)((int)pvVar3 + 0x10f1) = iVar11;
        iVar9 = *(int *)(&DAT_007c9788 + iVar13);
        if (iVar11 <= *(int *)(&DAT_007c9788 + iVar13)) {
          iVar9 = iVar11;
        }
        if (iVar9 < *(int *)(&DAT_007c9790 + iVar13)) {
          *(int *)((int)pvVar3 + 0x10f1) = iVar11;
          local_c = *(int *)(&DAT_007c9788 + iVar13);
          if (iVar11 <= *(int *)(&DAT_007c9788 + iVar13)) {
            local_c = iVar11;
          }
          iVar11 = (int)(1000 / (longlong)*(int *)(&DAT_007c9790 + iVar13)) * local_c;
        }
        else {
          iVar11 = 1000;
        }
        *(int *)((int)pvVar3 + 0x10f1) = iVar4;
        if (iVar4 == local_1c) {
          iVar4 = 0;
        }
        else {
          if ((*(int *)((int)pvVar3 + 0x10e5) == 0) || (*(int *)((int)pvVar3 + 0x10e5) == 3)) {
            bVar1 = iVar4 <= local_1c;
          }
          else {
            bVar1 = local_1c <= iVar4;
          }
          iVar4 = (bVar1 - 1 & 2) - 1;
        }
        Library::DKW::SND::FUN_006c1d80(iVar5,iVar4 * iVar11);
        iVar4 = iVar5;
      }
      local_8 = iVar4 + 1;
      local_10 = local_10 + 3;
    } while (local_8 < 0x20);
    g_currentExceptionFrame = local_b0.previous;
    return;
  }
  if ((((*(int *)((int)this + 0x10d9) == param_1) && (*(int *)((int)this + 0x10dd) == param_2)) &&
      (*(int *)((int)this + 0x10e5) == param_3)) && (*(int *)((int)this + 0x10e1) == param_4)) {
    return;
  }
  *(int *)((int)this + 0x10e5) = param_3;
  *(int *)((int)this + 0x10d9) = param_1;
  *(int *)((int)this + 0x10dd) = param_2;
  local_6c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_6c;
  iVar4 = Library::MSVCRT::__setjmp3(local_6c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pvVar3 = local_20;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_6c.previous;
    return;
  }
  switch(*(undefined4 *)((int)local_20 + 0x10e5)) {
  case 0:
    local_8 = param_4 * 5 + 5;
    fVar2 = (float)local_8;
    uVar15 = 0xbf350481;
    uVar14 = 0xbf350481;
    break;
  case 1:
    local_8 = param_4 * 5 + 5;
    fVar2 = (float)local_8;
    uVar15 = 0xbf350481;
    uVar14 = 0x3f350481;
    break;
  case 2:
    local_8 = param_4 * 5 + 5;
    fVar2 = (float)local_8;
    uVar15 = 0x3f350481;
    uVar14 = 0x3f350481;
    break;
  case 3:
    local_8 = param_4 * 5 + 5;
    fVar2 = (float)local_8;
    uVar15 = 0x3f350481;
    uVar14 = 0xbf350481;
    break;
  default:
    goto switchD_005675bc_default;
  }
  Library::DKW::SND::FUN_006c2160
            ((float)*(int *)((int)local_20 + 0x10d9),(float)*(int *)((int)local_20 + 0x10dd),fVar2,
             uVar14,uVar15,0,0,0,0x3f800000);
switchD_005675bc_default:
  if (*(int *)((int)pvVar3 + 0x10e1) != param_4) {
    *(int *)((int)pvVar3 + 0x10e1) = param_4;
    iVar4 = 2;
    piVar12 = (int *)((int)pvVar3 + 0xe23);
    do {
      FUN_006c1f00(iVar4,&local_18,(uint *)0x0);
      if (local_18 == 1) {
        if (((3 < iVar4) && (iVar4 < 0xb)) || ((0x11 < iVar4 && (iVar4 < 0x15)))) {
          iVar5 = *(int *)((int)pvVar3 + 0x10e1) * 0x10;
          Library::DKW::SND::FUN_006c2220
                    (iVar4,(float)*piVar12,(float)piVar12[1],0,
                     (float)*(int *)(&DAT_007c9790 + iVar5),(float)*(int *)(&DAT_007c9788 + iVar5));
        }
        if ((10 < iVar4) && (iVar4 < 0x12)) {
          iVar5 = *(int *)((int)pvVar3 + 0x10e1) * 0x10;
          Library::DKW::SND::FUN_006c2220
                    (iVar4,(float)*piVar12,(float)piVar12[1],0,
                     (float)*(int *)(&DAT_007c9790 + iVar5),(float)*(int *)(&DAT_007c978c + iVar5));
        }
      }
      iVar4 = iVar4 + 1;
      piVar12 = piVar12 + 3;
    } while (iVar4 < 0x20);
  }
  g_currentExceptionFrame = local_6c.previous;
  return;
}

