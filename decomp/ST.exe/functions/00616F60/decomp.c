
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_00616f60(void *this,int *param_1,int *param_2,int *param_3)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  longlong lVar8;
  int local_14;
  int local_10;
  float local_c;
  float local_8;

  local_14 = *(int *)((int)this + 0x2c1);
  if (local_14 == 0) {
    return 0;
  }
  iVar5 = 1;
  iVar6 = (PTR_00802a38->field_00E4 - *(int *)((int)this + 0x298)) * *(int *)((int)this + 0x288);
  local_8 = (float)iVar6 / (float)local_14;
  if ((local_8 <= _DAT_0079ceb8) && (*(char *)((int)this + 0x29c) == '\0'))
  goto cf_common_exit_00617221;
  if (local_8 <= _DAT_0079ceb4) {
    iVar3 = thunk_FUN_00616280(this,(int *)&local_c,&local_10,&local_14);
    if (iVar3 < 0) {
      iVar5 = thunk_FUN_006173a0(this,iVar6,param_1,param_2,param_3);
      if (0 < iVar5) {
        *(undefined4 *)((int)this + 0x256) = 2;
        *(undefined4 *)((int)this + 0x20c) = 4;
        *(undefined2 *)((int)this + 0x270) = 0xffff;
        iVar6 = *(int *)((int)this + 0x1c);
        goto LAB_006171d9;
      }
    }
    else {
      iVar3 = FUN_006acf0d((int)*(short *)((int)this + 0x260),(int)*(short *)((int)this + 0x262),
                           (int)*(short *)((int)this + 0x264),(int)*(short *)((int)this + 0x25a),
                           (int)*(short *)((int)this + 0x25c),(int)*(short *)((int)this + 0x25e));
      iVar4 = FUN_006acf0d((int)*(short *)((int)this + 0x260),(int)*(short *)((int)this + 0x262),
                           (int)*(short *)((int)this + 0x264),(int)local_c,local_10,local_14);
      if ((iVar3 == 0) || (iVar4 == 0)) goto cf_common_exit_00617221;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if ((float)(((int)*(short *)((int)this + 0x25a) - (int)*(short *)((int)this + 0x260)) *
                  ((int)local_c - (int)*(short *)((int)this + 0x260)) +
                  ((int)*(short *)((int)this + 0x25c) - (int)*(short *)((int)this + 0x262)) *
                  (local_10 - *(short *)((int)this + 0x262)) +
                 ((int)*(short *)((int)this + 0x25e) - (int)*(short *)((int)this + 0x264)) *
                 (local_14 - *(short *)((int)this + 0x264))) / (float)(iVar4 * iVar3) <=
          _DAT_0079ceb0) {
        iVar5 = 1;
        *(undefined1 *)((int)this + 0x29c) = 1;
        goto cf_common_exit_00617221;
      }
      iVar5 = thunk_FUN_006173a0(this,iVar6,param_1,param_2,param_3);
      if (0 < iVar5) {
        *(undefined4 *)((int)this + 0x256) = 2;
        *(undefined4 *)((int)this + 0x20c) = 3;
        *(undefined4 *)((int)this + 0x294) = PTR_00802a38->field_00E4;
        *(undefined4 *)((int)this + 0x298) = PTR_00802a38->field_00E4;
        goto cf_common_exit_00617221;
      }
    }
  }
  else {
    iVar5 = thunk_FUN_006173a0(this,iVar6,param_1,param_2,param_3);
    if (0 < iVar5) {
      *(undefined4 *)((int)this + 0x256) = 2;
      *(undefined4 *)((int)this + 0x20c) = 4;
      *(undefined2 *)((int)this + 0x270) = 0xffff;
      iVar6 = *(int *)((int)this + 0x1c);
LAB_006171d9:
      uVar2 = iVar6 * 0x41c64e6d + 0x3039;
      *(uint *)((int)this + 0x1c) = uVar2;
      *(uint *)((int)this + 0x294) = (uVar2 >> 0x10) % 0xb + 10 + PTR_00802a38->field_00E4;
      *(undefined4 *)((int)this + 0x298) = PTR_00802a38->field_00E4;
      goto cf_common_exit_00617221;
    }
  }
  thunk_FUN_0060ec00(this);
  *(undefined4 *)((int)this + 0x20c) = 9;
cf_common_exit_00617221:
  fVar7 = (float10)fcos((float10)local_8);
  local_c = (float)(fVar7 * (float10)*(int *)((int)this + 0x2c1));
  fsin((float10)local_8);
  lVar8 = Library::MSVCRT::__ftol();
  *param_1 = (int)lVar8 + (int)*(short *)((int)this + 0x272);
  sVar1 = *(short *)((int)this + 0x274);
  lVar8 = Library::MSVCRT::__ftol();
  *param_2 = (int)sVar1 + (int)lVar8;
  sVar1 = *(short *)((int)this + 0x276);
  lVar8 = Library::MSVCRT::__ftol();
  *param_3 = (int)sVar1 + (int)lVar8;
  return iVar5;
}

