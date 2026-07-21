
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_005f3bf0(void *this,int param_1,int param_2,undefined4 param_3,char param_4)

{
  double dVar1;
  uint uVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  float local_20 [2];
  int local_18;
  float local_14;
  int local_10;
  int local_c;
  undefined4 local_8;

  local_8 = 0;
  if (param_4 == '\0') {
    *(undefined2 *)((int)this + 0xd1) = *(undefined2 *)((int)this + 0x93);
    *(undefined2 *)((int)this + 0xd3) = *(undefined2 *)((int)this + 0x97);
    *(short *)((int)this + 0xd5) = *(short *)((int)this + 0x9b);
    iVar4 = 900 - *(short *)((int)this + 0x9b);
    *(undefined4 *)((int)this + 0xdf) = 0x14;
    *(undefined4 *)((int)this + 0xe7) = 1;
    *(int *)((int)this + 0xef) = iVar4;
    *(uint *)((int)this + 0xfb) = PTR_00802a38->field_00E4;
    if (0 < iVar4) {
      *(undefined4 *)((int)this + 0xc9) = 0;
      return 1;
    }
    iVar4 = thunk_FUN_005f3bf0(this,param_1,param_2,param_3,'\x01');
    if (iVar4 != 0) {
      *(undefined4 *)((int)this + 0xc9) = 1;
      *(undefined4 *)((int)this + 0x104) = 1;
      local_8 = 1;
    }
  }
  else if (param_4 == '\x01') {
    iVar4 = FUN_006aced8(*(int *)((int)this + 0x93),*(int *)((int)this + 0x97),param_1,param_2);
    *(int *)((int)this + 0xef) = iVar4;
    local_14 = (float)iVar4;
    if (iVar4 < 0x1f7) {
      *(int *)((int)this + 0xf7) =
           (*(int *)((int)this + 0xdf) * *(int *)((int)this + 0xdf) * 10000) / 0x1f6;
      iVar5 = *(int *)((int)this + 0x9b);
      lVar9 = Library::MSVCRT::__ftol();
      iVar8 = (int)lVar9 + 1;
      fVar3 = (float)(int)local_14 / (float)(iVar8 * 2);
      local_14 = (fVar3 * fVar3) / (float)(int)local_14;
      dVar1 = (double)(fVar3 / local_14 + _DAT_00790784);
      Library::MSVCRT::FUN_0072e150(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
      lVar9 = Library::MSVCRT::__ftol();
      local_10 = (int)lVar9;
      if (*(int *)((int)this + 0xef) != 0) {
        *(undefined2 *)((int)this + 0xd1) = *(undefined2 *)((int)this + 0x93);
        *(int *)((int)this + 0xff) = iVar8;
        *(undefined2 *)((int)this + 0xd3) = *(undefined2 *)((int)this + 0x97);
        *(undefined2 *)((int)this + 0xd5) = *(undefined2 *)((int)this + 0x9b);
        *(undefined4 *)((int)this + 0xe3) = *(undefined4 *)((int)this + 0xdf);
        lVar9 = Library::MSVCRT::__ftol();
        *(int *)((int)this + 0xcd) = (int)lVar9;
        lVar9 = Library::MSVCRT::__ftol();
        local_18 = -*(int *)((int)this + 0xdf);
        iVar5 = thunk_FUN_005f3b30((float)local_10,(float)*(int *)((int)this + 0xdf),
                                   (float)(0x4b0 - iVar5),(float)local_18,local_20);
        if (iVar5 != 0) {
          lVar10 = Library::MSVCRT::__ftol();
          *(int *)((int)this + 0xdf) = (int)lVar10;
          lVar10 = Library::MSVCRT::__ftol();
          *(int *)((int)this + 0xeb) = (int)lVar10;
          *(int *)((int)this + 0xd7) =
               ((param_1 - *(short *)((int)this + 0xd1)) * (int)lVar9) / iVar4;
          *(int *)((int)this + 0xdb) =
               ((param_2 - *(short *)((int)this + 0xd3)) * (int)lVar9) / iVar4;
          uVar2 = PTR_00802a38->field_00E4;
          *(undefined4 *)((int)this + 0xc9) = 1;
          *(uint *)((int)this + 0xfb) = uVar2;
          *(int *)((int)this + 0xe7) = local_10;
          *(int *)((int)this + 0xf3) = iVar4 / 2;
          return 1;
        }
      }
    }
    else {
      iVar5 = *(int *)((int)this + 0xdf);
      iVar4 = (iVar5 * iVar5 * 10000) / iVar4;
      *(int *)((int)this + 0xf7) = iVar4;
      if (iVar5 * iVar5 != 0) {
        *(int *)((int)this + 0xe3) = iVar5;
        *(undefined2 *)((int)this + 0xd1) = *(undefined2 *)((int)this + 0x93);
        *(undefined2 *)((int)this + 0xd3) = *(undefined2 *)((int)this + 0x97);
        *(undefined2 *)((int)this + 0xd5) = *(undefined2 *)((int)this + 0x9b);
        iVar6 = (int)(0x1eab90 / (longlong)(iVar5 * 0x1b9f)) + 1;
        iVar4 = iVar4 * iVar6;
        *(int *)((int)this + 0xff) = iVar6;
        local_c = iVar5 * 0x1b9f;
        iVar8 = (local_c * iVar6) / 10000;
        local_10 = ((local_c / 100) * (local_c / 100)) / (iVar8 * 2);
        iVar7 = (int)((ulonglong)((longlong)iVar4 * -0x68db8bad) >> 0x20);
        local_18 = (iVar7 >> 0xc) - (iVar7 >> 0x1f);
        iVar4 = thunk_FUN_005f3b30((float)local_c / (float)local_10,(float)iVar5,
                                   (float)(((iVar8 - (iVar4 * iVar6) / 20000) -
                                           (int)*(short *)((int)this + 0x9b)) + 0x44c),
                                   (float)local_18,local_20);
        if (iVar4 != 0) {
          lVar9 = Library::MSVCRT::__ftol();
          *(int *)((int)this + 0xdf) = (int)lVar9;
          lVar9 = Library::MSVCRT::__ftol();
          *(int *)((int)this + 0xeb) = (int)lVar9;
          *(int *)((int)this + 0xd7) =
               ((param_1 - *(short *)((int)this + 0xd1)) * local_10) / (int)local_14;
          *(int *)((int)this + 0xdb) =
               ((param_2 - *(short *)((int)this + 0xd3)) * local_10) / (int)local_14;
          uVar2 = PTR_00802a38->field_00E4;
          *(undefined4 *)((int)this + 0xc9) = 1;
          *(uint *)((int)this + 0xfb) = uVar2;
          *(int *)((int)this + 0xe7) = local_10;
          *(int *)((int)this + 0xf3) = iVar8;
          return 1;
        }
      }
    }
  }
  else if ((param_4 == '\x02') && (iVar4 = *(int *)((int)this + 0xef), iVar4 != 0)) {
    uVar2 = *(uint *)((int)this + 0xff);
    *(undefined4 *)((int)this + 0xc9) = 2;
    if (uVar2 < PTR_00802a38->field_00E4) {
      *(uint *)((int)this + 0xfb) = PTR_00802a38->field_00E4 - uVar2;
      if (0x1f6 < iVar4) {
        *(undefined2 *)((int)this + 0xd5) = 0x44c;
        iVar5 = *(int *)((int)this + 0xe3) * 0x1b9f;
        *(int *)((int)this + 0xdf) = iVar5;
        *(int *)((int)this + 0xe3) = iVar5;
        *(int *)((int)this + 0xd7) = ((param_1 - *(short *)((int)this + 0xd1)) * iVar5) / iVar4;
        *(int *)((int)this + 0xdb) = ((param_2 - *(short *)((int)this + 0xd3)) * iVar5) / iVar4;
        return 1;
      }
      *(uint *)((int)this + 0xdf) = *(int *)((int)this + 0xf7) * uVar2;
      iVar5 = *(int *)((int)this + 0xcd);
      *(short *)((int)this + 0xd5) =
           0x4b0 - (short)((*(int *)((int)this + 0xf7) * uVar2 * uVar2) / 20000);
      *(int *)((int)this + 0xe3) = iVar5;
      *(int *)((int)this + 0xd7) = ((param_1 - *(short *)((int)this + 0xd1)) * iVar5) / iVar4;
      *(int *)((int)this + 0xdb) = ((param_2 - *(short *)((int)this + 0xd3)) * iVar5) / iVar4;
      return 1;
    }
  }
  return local_8;
}

