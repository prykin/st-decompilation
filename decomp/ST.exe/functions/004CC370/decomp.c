
undefined4 __fastcall FUN_004cc370(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  if ((param_1[0x111] == 0) || (param_1[0x112] == 0)) {
    return 0;
  }
  if (-1 < param_1[0x113]) {
    iVar2 = *(int *)(*(STT3DSprC **)((int)param_1 + 0x603) + 0x20);
    if (*(int *)(iVar2 + 0x20c) <= *(int *)(iVar2 + 0x210)) {
      STT3DSprC::StopShow(*(STT3DSprC **)((int)param_1 + 0x603),0xe);
      thunk_FUN_004ad430(*(int *)((int)param_1 + 0x603));
      STT3DSprC::UnLoadSequence(*(STT3DSprC **)((int)param_1 + 0x603),0xe);
      uVar1 = thunk_FUN_004ad650(*(int *)((int)param_1 + 0x603));
      FUN_006ea2f0(*(void **)((int)param_1 + 0x211),uVar1);
      param_1[0x113] = -1;
      param_1[0x114] = *(int *)(DAT_00802a38 + 0xe4);
    }
    goto LAB_004cc6d2;
  }
  iVar2 = (**(code **)(*param_1 + 0x7c))();
  if ((3 < iVar2 / 0x14) && (param_1[0x10f] == 1)) {
    thunk_FUN_004cc900((int)param_1);
    goto LAB_004cc6d2;
  }
  STT3DSprC::UnLoadSequence((STT3DSprC *)((int)param_1 + 0x1d5),6);
  iVar2 = param_1[0x110];
  param_1[0x10f] = iVar2;
  if (*(uint *)(DAT_00802a38 + 0xe4) < param_1[0x114] + (~-(uint)(iVar2 != 1) & DAT_00790c14))
  goto LAB_004cc6d2;
  if (iVar2 == 2) {
    iVar2 = STT3DSprC::LoadSequence
                      (*(STT3DSprC **)((int)param_1 + 0x603),0xe,DAT_0080678c,
                       PTR_s_tlo_capture_00790c28,0x1d);
    if (iVar2 != 0) {
      iVar4 = 0x37c;
      goto LAB_004cc50a;
    }
  }
  else if ((iVar2 == 3) || (iVar2 == 4)) {
    iVar2 = STT3DSprC::LoadSequence
                      (*(STT3DSprC **)((int)param_1 + 0x603),0xe,DAT_0080678c,
                       PTR_s_tlo_emb6_00790c20,0x1d);
    if (iVar2 != 0) {
      iVar4 = 0x37f;
      goto LAB_004cc50a;
    }
  }
  else {
    iVar2 = STT3DSprC::LoadSequence
                      (*(STT3DSprC **)((int)param_1 + 0x603),0xe,DAT_00806764,
                       PTR_s_tlo_bubbles_00790c1c,0x1d);
    if (iVar2 != 0) {
      iVar4 = 0x381;
LAB_004cc50a:
      RaiseInternalException(iVar2,DAT_007ed77c,s_E____titans_Artem_TLO_bspr_cpp_007ad4d0,iVar4);
    }
  }
  uVar5 = 6;
  iVar2 = thunk_FUN_004ad650((int)param_1 + 0x1d5);
  uVar1 = thunk_FUN_004ad650(*(int *)((int)param_1 + 0x603));
  FUN_006ea340(*(void **)((int)param_1 + 0x211),uVar1,iVar2,uVar5);
  thunk_FUN_004ad3c0(*(void **)((int)param_1 + 0x603),*(float *)((int)param_1 + 0x1f9),
                     *(float *)((int)param_1 + 0x1fd),*(float *)((int)param_1 + 0x201));
  uVar1 = param_1[7] * 0x41c64e6d + 0x3039;
  param_1[7] = uVar1;
  iVar4 = *(int *)((int)param_1 + 0x235) * 0x44;
  uVar1 = (uVar1 >> 0x10) % *(uint *)(&DAT_00797748 + iVar4);
  param_1[0x113] = uVar1;
  iVar2 = param_1[0x10f];
  if (iVar2 == 2) {
    uVar5 = (*(int *)((int)param_1 + 0x613) - *(int *)(&DAT_0079774c + uVar1 * 8 + iVar4)) + 0x28;
    uVar1 = (*(int *)((int)param_1 + 0x617) - *(int *)(&DAT_00797750 + uVar1 * 8 + iVar4)) + 0x1f;
  }
  else {
    if ((iVar2 == 3) || (iVar3 = 0x17, iVar2 == 4)) {
      iVar3 = 0x10;
    }
    uVar5 = (*(int *)((int)param_1 + 0x613) - *(int *)(&DAT_0079774c + uVar1 * 8 + iVar4)) + iVar3;
    if ((iVar2 == 3) || (iVar3 = 0x5c, iVar2 == 4)) {
      iVar3 = 0x15;
    }
    uVar1 = (*(int *)((int)param_1 + 0x617) - *(int *)(&DAT_00797750 + uVar1 * 8 + iVar4)) + iVar3;
  }
  thunk_FUN_004ad380(*(void **)((int)param_1 + 0x603),uVar5,uVar1);
  thunk_FUN_004abe40(*(void **)((int)param_1 + 0x603),'\x0e',0);
  STT3DSprC::StartShow
            (*(STT3DSprC **)((int)param_1 + 0x603),0xe,*(undefined4 *)(DAT_00802a38 + 0xe4));
  thunk_FUN_004ad460(*(void **)((int)param_1 + 0x603),1);
  if ((param_1[0x10f] == 3) || (param_1[0x10f] == 4)) {
    (**(code **)(*param_1 + 0x90))(3,0x363);
  }
  if (param_1[0x10f] == 2) {
    uVar1 = thunk_FUN_004406c0(*(char *)((int)param_1 + 0x23d));
    if (*(int *)(&DAT_00795f18 + ((uVar1 & 0xff) + *(int *)((int)param_1 + 0x235) * 3) * 4) != 0) {
      iVar2 = *param_1;
      uVar1 = thunk_FUN_004406c0(*(char *)((int)param_1 + 0x23d));
      (**(code **)(iVar2 + 0x90))
                (3,*(undefined4 *)
                    (&DAT_00795f18 + ((uVar1 & 0xff) + *(int *)((int)param_1 + 0x235) * 3) * 4));
    }
  }
LAB_004cc6d2:
  thunk_FUN_004ac9e0(*(void **)((int)param_1 + 0x603),*(int *)(DAT_00802a38 + 0xe4));
  return 0;
}

