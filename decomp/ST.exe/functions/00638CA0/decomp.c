
undefined4 __thiscall FUN_00638ca0(void *this,int param_1)

{
  STT3DSprC *this_00;
  char cVar1;
  short sVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int local_10;
  int local_c;
  byte *local_8;
  
  iVar4 = STSprGameObjC::GetMessage(this,param_1);
  if (iVar4 == 0xffff) {
    return 0xffff;
  }
  uVar5 = *(uint *)(param_1 + 0x10);
  if (3 < uVar5) {
    if (uVar5 != 0x10f) {
      return 0;
    }
    local_8 = (byte *)FUN_006aac70(0x7a);
    thunk_FUN_00639bf0(this,(undefined4 *)local_8);
    STPlaySystemC::SaveObjData(DAT_00802a38,*(undefined4 *)((int)this + 0x18),local_8,0x7a);
    FUN_006ab060(&local_8);
    return 0;
  }
  if (uVar5 == 3) {
    thunk_FUN_004ad310((int)this + 0x1d5);
    return 0;
  }
  if (uVar5 != 0) {
    if (uVar5 != 2) {
      return 0;
    }
    puVar8 = *(undefined4 **)(param_1 + 0x14);
    if (puVar8[3] == 2) {
      thunk_FUN_00639c40(this,puVar8);
      puVar8 = (undefined4 *)((int)this + 0x2ab);
      for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      }
      *(undefined1 *)puVar8 = 0;
      if (*(char *)((int)this + 0x26f) == '\x02') {
        *(undefined1 *)((int)this + 0x26f) = 3;
      }
    }
    else {
      puVar9 = (undefined4 *)((int)this + 0x231);
      for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar9 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + 1;
      }
      *(undefined2 *)puVar9 = *(undefined2 *)puVar8;
      thunk_FUN_00639500(this,*(undefined4 *)(DAT_00802a38 + 0xe4));
    }
    if (*(char *)((int)this + 0x270) == '\0') {
      return 0;
    }
    if (*(char *)((int)this + 0x26f) == '\x01') {
      return 0;
    }
    thunk_FUN_00639990(this);
    return 0;
  }
  switch(*(undefined1 *)((int)this + 0x26f)) {
  case 0:
    if (*(char *)((int)this + 0x270) == '\0') {
      thunk_FUN_00639990(this);
    }
    uVar5 = thunk_FUN_00639670(this,*(int *)(DAT_00802a38 + 0xe4));
    if (0 < (int)uVar5) {
      iVar4 = *(int *)((int)this + 0x2bf);
      if (iVar4 != 0) {
        if (*(int *)((int)this + 0x2c7) == 0) {
          FUN_006ea460(*(void **)((int)this + 0x211),*(uint *)((int)this + 0x1ed),
                       *(int *)(iVar4 + 0x1ed));
        }
        else {
          FUN_006ea3e0(*(void **)((int)this + 0x211),*(uint *)((int)this + 0x1ed),
                       *(int *)(iVar4 + 0x1ed));
        }
      }
      uVar11 = 0x53;
      uVar10 = 0x5a;
      iVar4 = 1;
      uVar5 = thunk_FUN_004ad650((int)this + 0x1d5);
      FUN_006ea4e0(*(void **)((int)this + 0x211),uVar5,iVar4,uVar10,uVar11);
      *(undefined1 *)((int)this + 0x26f) = 2;
      thunk_FUN_00639990(this);
      return 0;
    }
    if (*(char *)((int)this + 0x270) == '\0') {
      return 0;
    }
    thunk_FUN_00416240(this,*(undefined2 *)((int)this + 0x27a),*(undefined2 *)((int)this + 0x27e),
                       *(undefined2 *)((int)this + 0x282));
    (**(code **)(*(int *)this + 0xd8))();
    pvVar3 = DAT_00802a88;
    if (DAT_00802a88 == (void *)0x0) {
      return 0;
    }
    iVar4 = *(int *)((int)this + 0x282);
    sVar2 = (short)(iVar4 >> 0x1f);
    if (iVar4 < 0) {
      param_1 = (short)(((short)(iVar4 / 200) + sVar2) -
                       (short)((longlong)iVar4 * 0x51eb851f >> 0x3f)) + -1;
    }
    else {
      param_1 = (int)(short)(((short)(iVar4 / 200) + sVar2) -
                            (short)((longlong)iVar4 * 0x51eb851f >> 0x3f));
    }
    iVar4 = *(int *)((int)this + 0x27e);
    sVar2 = (short)(iVar4 >> 0x1f);
    if (iVar4 < 0) {
      iVar4 = (short)(((short)(iVar4 / 0xc9) + sVar2) - (short)((longlong)iVar4 * 0x28c1979 >> 0x3f)
                     ) + -1;
    }
    else {
      iVar4 = (int)(short)(((short)(iVar4 / 0xc9) + sVar2) -
                          (short)((longlong)iVar4 * 0x28c1979 >> 0x3f));
    }
    iVar6 = *(int *)((int)this + 0x27a);
    sVar2 = (short)(iVar6 >> 0x1f);
    if (iVar6 < 0) {
      iVar6 = (short)(((short)(iVar6 / 0xc9) + sVar2) - (short)((longlong)iVar6 * 0x28c1979 >> 0x3f)
                     ) + -1;
    }
    else {
      iVar6 = (int)(short)(((short)(iVar6 / 0xc9) + sVar2) -
                          (short)((longlong)iVar6 * 0x28c1979 >> 0x3f));
    }
    if (((((DAT_0080874d != -1) && (*(int *)((int)DAT_00802a88 + 0xf8) != 0)) &&
         (thunk_FUN_00558c00(DAT_00802a88,*(undefined4 *)((int)DAT_00802a88 + 0x10c),iVar6,iVar4,
                             &local_c,&local_10), -1 < param_1)) &&
        (((param_1 < 5 && (-1 < local_c)) &&
         ((local_c < *(int *)((int)pvVar3 + 0x30) &&
          ((local_10 = local_10 + (&DAT_0079aed0)[param_1], -1 < local_10 &&
           (local_10 < *(int *)((int)pvVar3 + 0x34))))))))) && (*(int *)((int)pvVar3 + 0x4c) != 0))
    {
      cVar1 = *(char *)(local_10 * *(int *)((int)pvVar3 + 0x30) + *(int *)((int)pvVar3 + 0x4c) +
                       local_c);
joined_r0x00639236:
      if (cVar1 == '\0') {
        if (*(char *)((int)this + 0x271) == '\0') {
          return 0;
        }
        thunk_FUN_004ad430((int)this + 0x1d5);
        *(undefined1 *)((int)this + 0x271) = 0;
        return 0;
      }
    }
    break;
  case 1:
    if ((uint)(*(int *)(DAT_00802a38 + 0xe4) - *(int *)((int)this + 0x2a3)) <
        *(uint *)((int)this + 0x251)) {
      return 0;
    }
    *(undefined1 *)((int)this + 0x26f) = 0;
    uVar10 = *(undefined4 *)(DAT_00802a38 + 0xe4);
    *(undefined4 *)((int)this + 0x251) = 0;
    *(undefined4 *)((int)this + 0x2a3) = uVar10;
    if (*(char *)((int)this + 0x270) == '\0') {
      return 0;
    }
    thunk_FUN_00639990(this);
    return 0;
  case 2:
    if (*(char *)((int)this + 0x270) == '\0') {
      *(undefined1 *)((int)this + 0x26f) = 3;
      return 0;
    }
    this_00 = (STT3DSprC *)((int)this + 0x1d5);
    iVar4 = thunk_FUN_004ac910(this_00,'\r');
    if (*(char *)((int)this + 0x2a2) != '\0') {
      iVar6 = thunk_FUN_004acd30(this_00,'\x0e');
      iVar7 = thunk_FUN_004ac910(this_00,'\x0e');
      if ((iVar6 + -1 <= iVar7) && (*(char *)((int)this + 0x270) != '\0')) {
        STT3DSprC::StopShow(this_00,0xe);
      }
    }
    if ((iVar4 == 0x17) && (*(char *)((int)this + 0x270) != '\0')) {
      STT3DSprC::StartShow(this_00,0xf,*(undefined4 *)(DAT_00802a38 + 0xe4));
    }
    iVar4 = thunk_FUN_004acd30(this_00,'\r');
    iVar6 = thunk_FUN_004ac910(this_00,'\r');
    if (iVar4 + -1 == iVar6) {
      STT3DSprC::StopShow(this_00,0xd);
    }
    iVar4 = thunk_FUN_004acd30(this_00,'\x0f');
    iVar6 = thunk_FUN_004ac910(this_00,'\x0f');
    if (iVar4 + -1 == iVar6) {
      *(undefined1 *)((int)this + 0x26f) = 3;
    }
    (**(code **)(*(int *)this + 0xd8))();
    pvVar3 = DAT_00802a88;
    if (DAT_00802a88 == (void *)0x0) {
      return 0;
    }
    iVar4 = *(int *)((int)this + 0x282);
    sVar2 = (short)(iVar4 >> 0x1f);
    if (iVar4 < 0) {
      param_1 = (short)(((short)(iVar4 / 200) + sVar2) -
                       (short)((longlong)iVar4 * 0x51eb851f >> 0x3f)) + -1;
    }
    else {
      param_1 = (int)(short)(((short)(iVar4 / 200) + sVar2) -
                            (short)((longlong)iVar4 * 0x51eb851f >> 0x3f));
    }
    iVar4 = *(int *)((int)this + 0x27e);
    sVar2 = (short)(iVar4 >> 0x1f);
    if (iVar4 < 0) {
      iVar4 = (short)(((short)(iVar4 / 0xc9) + sVar2) - (short)((longlong)iVar4 * 0x28c1979 >> 0x3f)
                     ) + -1;
    }
    else {
      iVar4 = (int)(short)(((short)(iVar4 / 0xc9) + sVar2) -
                          (short)((longlong)iVar4 * 0x28c1979 >> 0x3f));
    }
    iVar6 = *(int *)((int)this + 0x27a);
    sVar2 = (short)(iVar6 >> 0x1f);
    if (iVar6 < 0) {
      iVar6 = (short)(((short)(iVar6 / 0xc9) + sVar2) - (short)((longlong)iVar6 * 0x28c1979 >> 0x3f)
                     ) + -1;
    }
    else {
      iVar6 = (int)(short)(((short)(iVar6 / 0xc9) + sVar2) -
                          (short)((longlong)iVar6 * 0x28c1979 >> 0x3f));
    }
    if ((((((DAT_0080874d != -1) && (*(int *)((int)DAT_00802a88 + 0xf8) != 0)) &&
          (thunk_FUN_00558c00(DAT_00802a88,*(undefined4 *)((int)DAT_00802a88 + 0x10c),iVar6,iVar4,
                              &local_10,&local_c), -1 < param_1)) &&
         ((param_1 < 5 && (-1 < local_10)))) &&
        ((local_10 < *(int *)((int)pvVar3 + 0x30) &&
         ((local_c = local_c + (&DAT_0079aed0)[param_1], -1 < local_c &&
          (local_c < *(int *)((int)pvVar3 + 0x34))))))) && (*(int *)((int)pvVar3 + 0x4c) != 0)) {
      cVar1 = *(char *)(local_c * *(int *)((int)pvVar3 + 0x30) + *(int *)((int)pvVar3 + 0x4c) +
                       local_10);
      goto joined_r0x00639236;
    }
    break;
  case 3:
    thunk_FUN_00639630(this);
    return 0;
  default:
    goto switchD_00638d7a_default;
  }
  if (*(char *)((int)this + 0x271) == '\0') {
    thunk_FUN_004ad460((void *)((int)this + 0x1d5),0);
    *(undefined1 *)((int)this + 0x271) = 1;
    return 0;
  }
switchD_00638d7a_default:
  return 0;
}

