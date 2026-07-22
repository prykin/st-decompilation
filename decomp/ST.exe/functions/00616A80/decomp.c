
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall
FUN_00616a80(void *this,int param_1,int param_2,int param_3,int *param_4,int *param_5,int *param_6)

{
  uint uVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float10 fVar8;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  float10 extraout_ST0;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  float10 extraout_ST1;
  float10 fVar9;
  longlong lVar10;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  float local_1c;
  float local_18;
  int local_14;
  int local_10;
  int local_c;
  float local_8;

  fVar8 = thunk_FUN_00616400(this,param_1,param_2,param_3);
  local_8 = (float)fVar8;
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
    *(uint *)((int)this + 0x294) = (uVar1 >> 0x10) % 0xb + 10 + g_playSystem_00802A38->field_00E4;
    *(uint *)((int)this + 0x298) = g_playSystem_00802A38->field_00E4;
    return iVar6;
  }
  local_c = *(int *)((int)this + 0x27c);
  sVar2 = *(short *)((int)this + 0x25a);
  *(undefined4 *)((int)this + 0x2c1) = 0x172;
  local_1c = (float)(int)sVar2;
  lVar10 = Library::MSVCRT::__ftol();
  local_24 = (int)lVar10;
  local_10 = *(int *)((int)this + 0x280);
  sVar3 = *(short *)((int)this + 0x25c);
  local_18 = (float)local_10;
  local_1c = (float)(int)sVar3;
  lVar10 = Library::MSVCRT::__ftol();
  local_20 = (int)lVar10;
  local_14 = *(int *)((int)this + 0x284);
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  local_28 = CONCAT22((short)((ulonglong)lVar10 >> 0x10),*(short *)((int)this + 0x25e));
  local_1c = (float)local_14;
  local_8 = (float)(int)*(short *)((int)this + 0x25e);
  lVar10 = Library::MSVCRT::__ftol();
  iVar6 = param_3 - (int)lVar10;
  local_20 = param_2 - local_20;
  local_44 = SQRT((float)((param_1 - local_24) * (param_1 - local_24) + local_20 * local_20 +
                         iVar6 * iVar6));
  if (local_44 != _DAT_0079034c) {
    iVar4 = *(int *)((int)this + 0x288);
    local_48 = (float)local_20 / local_44;
    iVar5 = (iVar4 * local_c) / 10000;
    local_44 = (float)iVar6 / local_44;
    iVar6 = (iVar4 * local_10) / 10000;
    iVar4 = (iVar4 * local_14) / 10000;
    lVar10 = Library::MSVCRT::__ftol();
    iVar7 = (int)lVar10 * 0x172;
    *(short *)((int)this + 0x272) =
         (sVar2 - (((short)(iVar7 / 10000) + (short)(iVar7 >> 0x1f)) -
                  (short)((longlong)iVar7 * 0x68db8bad >> 0x3f))) + (short)iVar5;
    lVar10 = Library::MSVCRT::__ftol();
    iVar7 = (int)lVar10 * 0x172;
    *(short *)((int)this + 0x274) =
         (sVar3 - (((short)(iVar7 / 10000) + (short)(iVar7 >> 0x1f)) -
                  (short)((longlong)iVar7 * 0x68db8bad >> 0x3f))) + (short)iVar6;
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    fVar9 = extraout_ST1;
    lVar10 = Library::MSVCRT::__ftol();
    iVar7 = (int)lVar10 * 0x172;
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    local_4c = (float)-extraout_ST0;
    local_48 = -local_48;
    local_44 = -local_44;
    fVar8 = (float10)_DAT_0079cea8;
    *(short *)((int)this + 0x276) =
         ((short)local_28 -
         (((short)(iVar7 / 10000) + (short)(iVar7 >> 0x1f)) -
         (short)((longlong)iVar7 * 0x68db8bad >> 0x3f))) + (short)iVar4;
    local_40 = (float)(fVar9 * fVar8);
    local_3c = local_18 * _DAT_0079cea8;
    local_38 = local_1c * _DAT_0079cea8;
    local_34 = local_38 * local_48 - local_3c * local_44;
    local_30 = local_40 * local_44 - local_38 * local_4c;
    local_2c = local_3c * local_4c - local_40 * local_48;
    iVar7 = thunk_FUN_0062ba50(&local_4c,(float *)((int)this + 0x29d));
    if (iVar7 != 0) {
      *(undefined4 *)((int)this + 0x20c) = 5;
      *(uint *)((int)this + 0x294) = g_playSystem_00802A38->field_00E4;
      *(uint *)((int)this + 0x298) = g_playSystem_00802A38->field_00E4;
      *(undefined1 *)((int)this + 0x29c) = 0;
      *param_4 = *(short *)((int)this + 0x25a) + iVar5;
      *param_5 = *(short *)((int)this + 0x25c) + iVar6;
      *param_6 = *(short *)((int)this + 0x25e) + iVar4;
      return 1;
    }
  }
  return 0;
}

