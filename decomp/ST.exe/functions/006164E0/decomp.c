
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_006164e0(void *this,int *param_1,int *param_2,int *param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  float10 fVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar2 = thunk_FUN_00616280(this,&local_10,&local_14,&local_18);
  if (iVar2 < 0) {
    return 0xffffffff;
  }
  iVar5 = *(int *)((int)this + 0x298);
  iVar6 = PTR_00802a38->field_00E4;
  local_8 = (int)*(short *)((int)this + 0x25a);
  local_c = (int)*(short *)((int)this + 0x25c);
  *(int *)((int)this + 0x298) = iVar6;
  iVar2 = (int)*(short *)((int)this + 0x25e);
  iVar3 = local_10 - *(short *)((int)this + 0x2cb);
  iVar4 = local_14 - *(short *)((int)this + 0x2cd);
  iVar6 = (iVar6 - iVar5) * *(int *)((int)this + 0x288);
  iVar5 = local_18 - *(short *)((int)this + 0x2cf);
  if (0xe1 < iVar5 * iVar5 + iVar4 * iVar4 + iVar3 * iVar3) {
    if ((local_18 - iVar2) * *(int *)((int)this + 0x284) +
        (local_14 - local_c) * *(int *)((int)this + 0x280) +
        (local_10 - local_8) * *(int *)((int)this + 0x27c) < 0) {
      iVar5 = thunk_FUN_006173a0(this,iVar6,param_1,param_2,param_3);
      if (iVar5 < 1) {
        thunk_FUN_0060ec00(this);
        *(undefined4 *)((int)this + 0x20c) = 9;
      }
      else {
        *(undefined4 *)((int)this + 0x256) = 2;
        *(undefined4 *)((int)this + 0x20c) = 4;
        *(undefined2 *)((int)this + 0x270) = 0xffff;
        uVar7 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)((int)this + 0x1c) = uVar7;
        *(uint *)((int)this + 0x294) = (uVar7 >> 0x10) % 0xb + 10 + PTR_00802a38->field_00E4;
        *(undefined4 *)((int)this + 0x298) = PTR_00802a38->field_00E4;
      }
    }
    else {
      fVar8 = thunk_FUN_00616400(this,local_10,local_14,local_18);
      if (fVar8 != (float10)_DAT_0079034c) {
        sVar1 = *(short *)((int)this + 0x25a);
        lVar9 = Library::MSVCRT::__ftol();
        local_8 = (int)*(short *)((int)this + 0x25c);
        lVar10 = Library::MSVCRT::__ftol();
        local_c = (int)*(short *)((int)this + 0x25e);
        lVar11 = Library::MSVCRT::__ftol();
        iVar2 = FUN_006acf0d((int)sVar1,local_8,local_c,local_10,local_14,local_18);
        iVar2 = (iVar2 << 3) / *(int *)((int)this + 0x288);
        if (iVar2 != 0) {
          *(short *)((int)this + 0x26c) = (short)(((local_10 - (int)lVar9) * 8) / iVar2);
          *(short *)((int)this + 0x26e) = (short)(((local_14 - (int)lVar10) * 8) / iVar2);
          *(short *)((int)this + 0x270) = (short)(((local_18 - (int)lVar11) * 8) / iVar2);
        }
      }
      *(undefined1 *)((int)this + 0x29c) = 0;
      local_8 = (*(int *)((int)this + 0x27c) * iVar6) / 10000 + (int)*(short *)((int)this + 0x25a);
      local_c = (*(int *)((int)this + 0x280) * iVar6) / 10000 + (int)*(short *)((int)this + 0x25c);
      sVar1 = *(short *)((int)this + 0x26c);
      iVar2 = (*(int *)((int)this + 0x284) * iVar6) / 10000 + (int)*(short *)((int)this + 0x25e);
      if (((sVar1 != 0) || (*(short *)((int)this + 0x26e) != 0)) ||
         (*(short *)((int)this + 0x270) != 0)) {
        uVar7 = (uint)sVar1;
        if (10 < (int)((uVar7 ^ (int)uVar7 >> 0x1f) - ((int)uVar7 >> 0x1f))) {
          if (sVar1 < 1) {
            iVar5 = -(uint)(sVar1 != 0);
          }
          else {
            iVar5 = 1;
          }
          *(undefined1 *)((int)this + 0x29c) = 1;
          uVar7 = iVar5 * 10;
        }
        local_8 = local_8 + uVar7;
        sVar1 = *(short *)((int)this + 0x26e);
        uVar7 = (uint)sVar1;
        if (10 < (int)((uVar7 ^ (int)uVar7 >> 0x1f) - ((int)uVar7 >> 0x1f))) {
          if (sVar1 < 1) {
            iVar5 = -(uint)(sVar1 != 0);
          }
          else {
            iVar5 = 1;
          }
          *(undefined1 *)((int)this + 0x29c) = 1;
          uVar7 = iVar5 * 10;
        }
        local_c = local_c + uVar7;
        iVar5 = local_c;
        sVar1 = *(short *)((int)this + 0x270);
        uVar7 = (uint)sVar1;
        if ((int)((uVar7 ^ (int)uVar7 >> 0x1f) - ((int)uVar7 >> 0x1f)) < 0xb) {
          iVar2 = iVar2 + uVar7;
        }
        else if (sVar1 < 1) {
          *(undefined1 *)((int)this + 0x29c) = 1;
          iVar2 = iVar2 + (uint)(sVar1 != 0) * -10;
        }
        else {
          *(undefined1 *)((int)this + 0x29c) = 1;
          iVar2 = iVar2 + 10;
        }
        iVar6 = FUN_006acf0d((int)*(short *)((int)this + 0x25a),(int)*(short *)((int)this + 0x25c),
                             (int)*(short *)((int)this + 0x25e),local_8,local_c,iVar2);
        if (iVar6 != 0) {
          *(int *)((int)this + 0x27c) = ((local_8 - *(short *)((int)this + 0x25a)) * 10000) / iVar6;
          *(int *)((int)this + 0x280) = ((iVar5 - *(short *)((int)this + 0x25c)) * 10000) / iVar6;
          *(int *)((int)this + 0x284) = ((iVar2 - *(short *)((int)this + 0x25e)) * 10000) / iVar6;
        }
      }
    }
  }
  *param_1 = local_8;
  *param_2 = local_c;
  *param_3 = iVar2;
  return 1;
}

