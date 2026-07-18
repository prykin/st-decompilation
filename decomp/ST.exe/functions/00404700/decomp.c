
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall
thunk_FUN_00616a80(void *this,int param_1,int param_2,int param_3,int *param_4,int *param_5,
                  int *param_6)

{
  uint uVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float10 fVar8;
  float10 extraout_ST0;
  float10 extraout_ST1;
  float10 fVar9;
  longlong lVar10;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  int iStack_20;
  float fStack_1c;
  float fStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  float fStack_8;
  
  fVar8 = thunk_FUN_00616400((int)this,param_1,param_2,param_3);
  fStack_8 = (float)fVar8;
  if (fVar8 == (float10)_DAT_0079034c) {
    iVar6 = thunk_FUN_006173a0(this,*(int *)((int)this + 0x288),param_4,param_5,param_6);
    if (iVar6 < 1) {
      thunk_FUN_0060ec00(this);
      *(undefined4 *)((int)this + 0x20c) = 9;
      return iVar6;
    }
    *(undefined4 *)((int)this + 0x256) = 2;
    *(undefined4 *)((int)this + 0x20c) = 4;
    *(undefined2 *)((int)this + 0x270) = 0xffff;
    uVar1 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
    *(uint *)((int)this + 0x1c) = uVar1;
    *(uint *)((int)this + 0x294) = (uVar1 >> 0x10) % 0xb + 10 + *(int *)(DAT_00802a38 + 0xe4);
    *(undefined4 *)((int)this + 0x298) = *(undefined4 *)(DAT_00802a38 + 0xe4);
    return iVar6;
  }
  iStack_c = *(int *)((int)this + 0x27c);
  sVar2 = *(short *)((int)this + 0x25a);
  *(undefined4 *)((int)this + 0x2c1) = 0x172;
  fStack_1c = (float)(int)sVar2;
  lVar10 = __ftol();
  iStack_24 = (int)lVar10;
  iStack_10 = *(int *)((int)this + 0x280);
  sVar3 = *(short *)((int)this + 0x25c);
  fStack_18 = (float)iStack_10;
  fStack_1c = (float)(int)sVar3;
  lVar10 = __ftol();
  iStack_20 = (int)lVar10;
  iStack_14 = *(int *)((int)this + 0x284);
  uStack_28 = CONCAT22((short)((ulonglong)lVar10 >> 0x10),*(short *)((int)this + 0x25e));
  fStack_1c = (float)iStack_14;
  fStack_8 = (float)(int)*(short *)((int)this + 0x25e);
  lVar10 = __ftol();
  iVar6 = param_3 - (int)lVar10;
  iStack_20 = param_2 - iStack_20;
  fStack_44 = SQRT((float)((param_1 - iStack_24) * (param_1 - iStack_24) + iStack_20 * iStack_20 +
                          iVar6 * iVar6));
  if (fStack_44 != _DAT_0079034c) {
    iVar4 = *(int *)((int)this + 0x288);
    fStack_48 = (float)iStack_20 / fStack_44;
    iVar5 = (iVar4 * iStack_c) / 10000;
    fStack_44 = (float)iVar6 / fStack_44;
    iVar6 = (iVar4 * iStack_10) / 10000;
    iVar4 = (iVar4 * iStack_14) / 10000;
    lVar10 = __ftol();
    iVar7 = (int)lVar10 * 0x172;
    *(short *)((int)this + 0x272) =
         (sVar2 - (((short)(iVar7 / 10000) + (short)(iVar7 >> 0x1f)) -
                  (short)((longlong)iVar7 * 0x68db8bad >> 0x3f))) + (short)iVar5;
    lVar10 = __ftol();
    iVar7 = (int)lVar10 * 0x172;
    *(short *)((int)this + 0x274) =
         (sVar3 - (((short)(iVar7 / 10000) + (short)(iVar7 >> 0x1f)) -
                  (short)((longlong)iVar7 * 0x68db8bad >> 0x3f))) + (short)iVar6;
    fVar9 = extraout_ST1;
    lVar10 = __ftol();
    iVar7 = (int)lVar10 * 0x172;
    fStack_4c = (float)-extraout_ST0;
    fStack_48 = -fStack_48;
    fStack_44 = -fStack_44;
    fVar8 = (float10)_DAT_0079cea8;
    *(short *)((int)this + 0x276) =
         ((short)uStack_28 -
         (((short)(iVar7 / 10000) + (short)(iVar7 >> 0x1f)) -
         (short)((longlong)iVar7 * 0x68db8bad >> 0x3f))) + (short)iVar4;
    fStack_40 = (float)(fVar9 * fVar8);
    fStack_3c = fStack_18 * _DAT_0079cea8;
    fStack_38 = fStack_1c * _DAT_0079cea8;
    fStack_34 = fStack_38 * fStack_48 - fStack_3c * fStack_44;
    fStack_30 = fStack_40 * fStack_44 - fStack_38 * fStack_4c;
    fStack_2c = fStack_3c * fStack_4c - fStack_40 * fStack_48;
    iVar7 = thunk_FUN_0062ba50(&fStack_4c,(float *)((int)this + 0x29d));
    if (iVar7 != 0) {
      *(undefined4 *)((int)this + 0x20c) = 5;
      *(undefined4 *)((int)this + 0x294) = *(undefined4 *)(DAT_00802a38 + 0xe4);
      *(undefined4 *)((int)this + 0x298) = *(undefined4 *)(DAT_00802a38 + 0xe4);
      *(undefined1 *)((int)this + 0x29c) = 0;
      *param_4 = *(short *)((int)this + 0x25a) + iVar5;
      *param_5 = *(short *)((int)this + 0x25c) + iVar6;
      *param_6 = *(short *)((int)this + 0x25e) + iVar4;
      return 1;
    }
  }
  return 0;
}

