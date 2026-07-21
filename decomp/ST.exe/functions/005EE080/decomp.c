
int __thiscall
FUN_005ee080(void *this,short param_1,short param_2,short param_3,short param_4,short param_5,
            short param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_14;
  int local_10;
  int local_c;

  if (*(int *)((int)this + 0x236) == 0) {
    uVar4 = *(byte *)((int)this + 0x251) + 0xc;
    if (0x18 < uVar4) {
      uVar4 = *(byte *)((int)this + 0x251) - 0xc;
    }
    iVar8 = (int)param_1;
    iVar7 = (iVar8 - *(int *)((int)this + 0x2be)) - DAT_007cdef4;
    iVar6 = ((int)param_2 - *(int *)((int)this + 0x2c2)) - DAT_007cdef8;
    iVar1 = (int)*(short *)(&DAT_007cde94 + uVar4 * 4);
    iVar5 = (int)*(short *)(&DAT_007cde96 + uVar4 * 4);
    iVar3 = (iVar5 * iVar6 + iVar1 * iVar7) / 10000;
    iVar6 = (iVar1 * iVar6 - iVar5 * iVar7) / 10000;
    iVar7 = DAT_007cdefc - *(int *)((int)this + 0x2c6);
    local_10 = (int)param_3;
    iVar2 = iVar7 + local_10;
    if ((((-1 < iVar3) && (iVar3 <= DAT_007cdef4 * 2)) && (-1 < iVar6)) &&
       (((iVar6 <= DAT_007cdef8 * 2 && (-1 < iVar2)) && (iVar2 <= DAT_007cdefc * 2)))) {
      local_14 = 3;
      iVar2 = (iVar8 - param_4) / 2 + (int)param_4;
      iVar3 = ((int)param_2 - (int)param_5) / 2 + (int)param_5;
      iVar6 = (int)param_6;
      _param_6 = (local_10 - param_6) / 2 + iVar6;
      local_c = (int)param_2;
      _param_2 = (uint)param_4;
      _param_5 = (int)param_5;
      _param_3 = iVar8;
      _param_4 = iVar6;
      do {
        iVar8 = (iVar2 - *(int *)((int)this + 0x2be)) - DAT_007cdef4;
        iVar9 = (iVar3 - *(int *)((int)this + 0x2c2)) - DAT_007cdef8;
        iVar6 = (iVar5 * iVar9 + iVar1 * iVar8) / 10000;
        iVar8 = (iVar1 * iVar9 - iVar5 * iVar8) / 10000;
        iVar9 = iVar7 + _param_6;
        if (((iVar6 < 0) || (DAT_007cdef4 * 2 < iVar6)) ||
           ((iVar8 < 0 ||
            (((DAT_007cdef8 * 2 < iVar8 || (iVar9 < 0)) || (DAT_007cdefc * 2 < iVar9)))))) {
          _param_4 = _param_6;
          _param_2 = iVar2;
          _param_5 = iVar3;
        }
        else {
          local_10 = _param_6;
          _param_3 = iVar2;
          local_c = iVar3;
        }
        iVar2 = (int)(_param_3 - _param_2) / 2 + _param_2;
        _param_6 = (local_10 - _param_4) / 2 + _param_4;
        iVar3 = (local_c - _param_5) / 2 + _param_5;
        local_14 = local_14 + -1;
      } while (local_14 != 0);
      uVar4 = 0;
      do {
        if (*(char *)((int)this + uVar4 + 0x308) == -1) {
          _param_2 = uVar4 & 0xff;
          if ((char)uVar4 != -1) goto LAB_005ee2fe;
          break;
        }
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < 5);
      _param_2 = 4;
/* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
LAB_005ee2fe:
      *(short *)((int)this + _param_2 * 6 + 0x2ea) = (short)iVar2;
      *(short *)((int)this + _param_2 * 6 + 0x2ec) = (short)iVar3;
      *(short *)((int)this + (_param_2 * 3 + 0x177) * 2) = param_6;
      return _param_2 + 1;
    }
  }
  return -1;
}

