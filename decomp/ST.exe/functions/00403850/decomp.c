
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall thunk_FUN_0063d660(void *this,char param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  float10 fVar7;
  unkbyte10 extraout_ST0;
  float10 fVar8;
  unkbyte10 extraout_ST0_00;
  float10 extraout_ST0_01;
  unkbyte10 extraout_ST0_02;
  float10 extraout_ST0_03;
  unkbyte10 extraout_ST0_04;
  float10 extraout_ST0_05;
  unkbyte10 extraout_ST0_06;
  float10 extraout_ST1;
  float10 extraout_ST1_00;
  float10 extraout_ST1_01;
  longlong lVar9;
  uint uStack_8;
  
  uVar4 = 0;
  if (*(int *)((int)this + 0x336) == 0) {
    return 0;
  }
  iVar5 = *(int *)(*(int *)((int)this + 0x336) + 0xc);
  if (param_1 == '\n') {
    fVar3 = _DAT_007d2044 + _DAT_007d2044;
    _param_1 = 0;
    *(undefined4 *)((int)this + 0x2b8) = *(undefined4 *)((int)this + 0x2b4);
    iVar1 = *(int *)((int)this + 700);
    *(undefined4 *)((int)this + 0x29a) = 1;
    uStack_8 = 0;
    if (0 < iVar5) {
      do {
        iVar2 = *(int *)((int)this + 0x336);
        if ((uStack_8 < *(uint *)(iVar2 + 0xc)) &&
           (puVar6 = (undefined4 *)(*(int *)(iVar2 + 8) * uStack_8 + *(int *)(iVar2 + 0x1c)),
           puVar6 != (undefined4 *)0x0)) {
          fVar7 = (float10)(int)_param_1 * (float10)(fVar3 / (float)iVar1);
          puVar6[10] = (float)fVar7;
          fcos(fVar7);
          lVar9 = Library::MSVCRT::__ftol();
          fsin(extraout_ST0_06);
          puVar6[2] = (int)lVar9 + *(int *)((int)this + 0x2a4);
          lVar9 = Library::MSVCRT::__ftol();
          _param_1 = uVar4 + 1;
          puVar6[3] = (int)lVar9 + *(int *)((int)this + 0x2a8);
          puVar6[4] = (float)*(int *)((int)this + 0x2ac) * _DAT_007904f8 * _DAT_007904f0;
          puVar6[5] = *(undefined4 *)((int)this + 0x2a4);
          puVar6[6] = *(undefined4 *)((int)this + 0x2a8);
          puVar6[7] = *(undefined4 *)((int)this + 0x2ac);
          iVar2 = *(int *)((int)this + 0x2b4);
          puVar6[1] = 1;
          puVar6[9] = 10;
          puVar6[8] = 5;
          *puVar6 = 0;
          puVar6[0xb] = (float)iVar2;
          uVar4 = _param_1;
          if (0x31 < (int)_param_1) {
            _param_1 = 0;
            uVar4 = _param_1;
          }
        }
        uStack_8 = uStack_8 + 1;
      } while ((int)uStack_8 < iVar5);
    }
  }
  else {
    if (param_1 == '\v') {
      fVar8 = (float10)_DAT_007d2044 * (float10)_DAT_0079d4a4;
      _param_1 = 0;
      *(undefined4 *)((int)this + 0x2b8) = *(undefined4 *)((int)this + 0x2b4);
      *(undefined4 *)((int)this + 0x29a) = 1;
      fVar7 = fVar8 + fVar8;
      do {
        iVar5 = *(int *)((int)this + 0x336);
        if ((uVar4 < *(uint *)(iVar5 + 0xc)) &&
           (puVar6 = (undefined4 *)(*(int *)(iVar5 + 8) * uVar4 + *(int *)(iVar5 + 0x1c)),
           puVar6 != (undefined4 *)0x0)) {
          puVar6[10] = (float)((float10)(int)_param_1 * fVar7);
          fcos((float10)(int)_param_1 * fVar7);
          lVar9 = Library::MSVCRT::__ftol();
          fsin(extraout_ST0_00);
          puVar6[2] = (int)lVar9 + *(int *)((int)this + 0x2a4);
          lVar9 = Library::MSVCRT::__ftol();
          puVar6[3] = (int)lVar9 + *(int *)((int)this + 0x2a8);
          puVar6[4] = (float)*(int *)((int)this + 0x2ac) * _DAT_007904f8 * _DAT_007904f0;
          puVar6[5] = *(undefined4 *)((int)this + 0x2a4);
          puVar6[6] = *(undefined4 *)((int)this + 0x2a8);
          puVar6[7] = *(undefined4 *)((int)this + 0x2ac);
          iVar5 = *(int *)((int)this + 0x2b4);
          puVar6[1] = 1;
          puVar6[9] = 1;
          *puVar6 = 1;
          puVar6[0xb] = (float)iVar5;
          _param_1 = _param_1 + 1;
          puVar6[8] = 0;
          fVar7 = extraout_ST0_01;
          fVar8 = extraout_ST1;
        }
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < 0x32);
      fVar7 = (float10)_DAT_007d2044 * (float10)_DAT_0079d4a0;
      _param_1 = 0;
      uVar4 = 0x32;
      do {
        iVar5 = *(int *)((int)this + 0x336);
        if ((uVar4 < *(uint *)(iVar5 + 0xc)) &&
           (puVar6 = (undefined4 *)(*(int *)(iVar5 + 8) * uVar4 + *(int *)(iVar5 + 0x1c)),
           puVar6 != (undefined4 *)0x0)) {
          fVar8 = (float10)(int)_param_1 * fVar7 + fVar8;
          puVar6[10] = (float)fVar8;
          fcos(fVar8);
          lVar9 = Library::MSVCRT::__ftol();
          fsin(extraout_ST0_02);
          puVar6[2] = (int)lVar9 + *(int *)((int)this + 0x2a4);
          lVar9 = Library::MSVCRT::__ftol();
          puVar6[3] = (int)lVar9 + *(int *)((int)this + 0x2a8);
          puVar6[4] = (float)*(int *)((int)this + 0x2ac) * _DAT_007904f8 * _DAT_007904f0;
          puVar6[5] = *(undefined4 *)((int)this + 0x2a4);
          puVar6[6] = *(undefined4 *)((int)this + 0x2a8);
          puVar6[7] = *(undefined4 *)((int)this + 0x2ac);
          iVar5 = *(int *)((int)this + 0x2b4);
          puVar6[1] = 1;
          puVar6[9] = 1;
          puVar6[8] = 0;
          puVar6[0xb] = (float)iVar5;
          _param_1 = _param_1 + 1;
          *puVar6 = 2;
          fVar7 = extraout_ST0_03;
          fVar8 = extraout_ST1_00;
        }
        iVar5 = uVar4 - 0x31;
        uVar4 = uVar4 + 1;
      } while (iVar5 < 10);
      fVar7 = (float10)_DAT_007d2044 * (float10)_DAT_0079d4a0;
      iVar5 = 0;
      _param_1 = 0;
      uStack_8 = 0x3c;
      do {
        iVar1 = *(int *)((int)this + 0x336);
        if ((uStack_8 < *(uint *)(iVar1 + 0xc)) &&
           (puVar6 = (undefined4 *)(*(int *)(iVar1 + 8) * uStack_8 + *(int *)(iVar1 + 0x1c)),
           puVar6 != (undefined4 *)0x0)) {
          fVar8 = (float10)(int)_param_1 * fVar7 + fVar8;
          puVar6[10] = (float)fVar8;
          fcos(fVar8);
          lVar9 = Library::MSVCRT::__ftol();
          fsin(extraout_ST0_04);
          puVar6[2] = (int)lVar9 + *(int *)((int)this + 0x2a4);
          lVar9 = Library::MSVCRT::__ftol();
          _param_1 = iVar5 + 1;
          puVar6[3] = (int)lVar9 + *(int *)((int)this + 0x2a8);
          puVar6[4] = (float)*(int *)((int)this + 0x2ac) * _DAT_007904f8 * _DAT_007904f0;
          puVar6[5] = *(undefined4 *)((int)this + 0x2a4);
          puVar6[6] = *(undefined4 *)((int)this + 0x2a8);
          puVar6[7] = *(undefined4 *)((int)this + 0x2ac);
          iVar5 = *(int *)((int)this + 0x2b4);
          puVar6[1] = 2;
          puVar6[9] = 0x19;
          puVar6[8] = 10;
          *puVar6 = 3;
          puVar6[0xb] = (float)iVar5;
          iVar5 = _param_1;
          fVar7 = extraout_ST0_05;
          fVar8 = extraout_ST1_01;
          if (9 < (int)_param_1) {
            _param_1 = 0;
            iVar5 = _param_1;
          }
        }
        iVar1 = uStack_8 - 0x3b;
        uStack_8 = uStack_8 + 1;
      } while (iVar1 < 300);
      puVar6 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(0x1b);
      *(undefined4 **)((int)this + 0x37f) = puVar6;
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = 0xffffffff;
        iVar5 = thunk_FUN_00640170(this,*(int *)((int)this + 0x2a4),*(int *)((int)this + 0x2a8),
                                   *(undefined4 *)((int)this + 0x2b4));
        if (iVar5 != 0) {
          thunk_FUN_00640240((int)this);
        }
      }
      iVar5 = *(int *)(*(int *)((int)this + 0x211) + 0x380);
      fVar7 = FUN_006e3210(*(int *)((int)this + 0x211),(*(int *)((int)this + 0x2a4) * iVar5) / 0xc9,
                           (*(int *)((int)this + 0x2a8) * iVar5) / 0xc9);
      *(float *)((int)this + 0x332) = (float)(fVar7 + (float10)_DAT_00790500);
      return 0;
    }
    if ((param_1 == '\f') && (iVar1 = *(int *)((int)this + 700), iVar1 != 0)) {
      fVar3 = _DAT_007d2044 + _DAT_007d2044;
      *(undefined4 *)((int)this + 0x2b8) = *(undefined4 *)((int)this + 0x2b4);
      _param_1 = 0;
      *(undefined4 *)((int)this + 0x29a) = 1;
      uStack_8 = 0;
      if (0 < iVar5) {
        do {
          iVar2 = *(int *)((int)this + 0x336);
          if ((uStack_8 < *(uint *)(iVar2 + 0xc)) &&
             (puVar6 = (undefined4 *)(*(int *)(iVar2 + 8) * uStack_8 + *(int *)(iVar2 + 0x1c)),
             puVar6 != (undefined4 *)0x0)) {
            fVar7 = (float10)(int)_param_1 * (float10)(fVar3 / (float)iVar1);
            puVar6[10] = (float)fVar7;
            fcos(fVar7);
            lVar9 = Library::MSVCRT::__ftol();
            fsin(extraout_ST0);
            puVar6[2] = (int)lVar9 + *(int *)((int)this + 0x2a4);
            lVar9 = Library::MSVCRT::__ftol();
            _param_1 = uVar4 + 1;
            puVar6[3] = (int)lVar9 + *(int *)((int)this + 0x2a8);
            puVar6[4] = (float)*(int *)((int)this + 0x2ac) * _DAT_007904f8 * _DAT_007904f0;
            puVar6[5] = *(undefined4 *)((int)this + 0x2a4);
            puVar6[6] = *(undefined4 *)((int)this + 0x2a8);
            puVar6[7] = *(undefined4 *)((int)this + 0x2ac);
            iVar2 = *(int *)((int)this + 0x2b4);
            puVar6[1] = 1;
            puVar6[9] = 10;
            puVar6[8] = 5;
            *puVar6 = 0;
            puVar6[0xb] = (float)iVar2;
            uVar4 = _param_1;
            if (*(int *)((int)this + 700) <= (int)_param_1) {
              _param_1 = 0;
              uVar4 = _param_1;
            }
          }
          uStack_8 = uStack_8 + 1;
        } while ((int)uStack_8 < iVar5);
        return 0;
      }
    }
  }
  return 0;
}

