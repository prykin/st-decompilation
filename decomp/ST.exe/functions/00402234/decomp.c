
undefined4 __fastcall thunk_FUN_00639990(void *param_1)

{
  STT3DSprC *pSVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(byte *)((int)param_1 + 0x26f) < 2) {
    pSVar1 = (STT3DSprC *)((int)param_1 + 0x1d5);
    iVar2 = STT3DSprC::LoadSequence(pSVar1,0xd,DAT_00806774,(byte *)s_trmbomb_007d1d9c,0x1d);
    if (iVar2 != 0) {
      return 0xffff;
    }
    iVar2 = STT3DSprC::LoadSequence(pSVar1,0xf,DAT_00806764,(byte *)&DAT_007d1db8,0x1d);
    if (iVar2 != 0) {
      return 0xffff;
    }
    thunk_FUN_004ac700(pSVar1,'\x0f');
    thunk_FUN_00416240(param_1,*(undefined2 *)((int)param_1 + 0x27a),
                       *(undefined2 *)((int)param_1 + 0x27e),*(undefined2 *)((int)param_1 + 0x282));
    uVar3 = thunk_FUN_004acd30(pSVar1,'\r');
    *(undefined4 *)((int)param_1 + 0x296) = uVar3;
    thunk_FUN_004ac660(pSVar1,'\r');
    STT3DSprC::StartShow(pSVar1,0xd,*(undefined4 *)(DAT_00802a38 + 0xe4));
    *(undefined1 *)((int)param_1 + 0x271) = 1;
  }
  else {
    if (*(byte *)((int)param_1 + 0x26f) != 2) {
      return 0;
    }
    pSVar1 = (STT3DSprC *)((int)param_1 + 0x1d5);
    iVar2 = STT3DSprC::LoadSequence(pSVar1,0xd,DAT_00806774,&DAT_007d1db0,0x1d);
    if (iVar2 != 0) {
      return 0xffff;
    }
    iVar2 = STT3DSprC::LoadSequence(pSVar1,0xe,DAT_00806774,(byte *)s_expmask2_007d1da4,0x1d);
    if (iVar2 != 0) {
      return 0xffff;
    }
    STT3DSprC::StartShow(pSVar1,0xe,*(undefined4 *)(DAT_00802a38 + 0xe4));
    *(undefined1 *)((int)param_1 + 0x2a2) = 1;
    STT3DSprC::StartShow(pSVar1,0xd,*(undefined4 *)(DAT_00802a38 + 0xe4));
    *(undefined1 *)((int)param_1 + 0x271) = 1;
    if (*(int *)((int)param_1 + 0x292) != 0) {
      STT3DSprC::SetCurFase(pSVar1,'\r',*(int *)((int)param_1 + 0x292));
    }
    if (*(int *)((int)param_1 + 0x292) != 0) {
      STT3DSprC::SetCurFase(pSVar1,'\x0e',*(int *)((int)param_1 + 0x292));
    }
    thunk_FUN_00416240(param_1,*(undefined2 *)((int)param_1 + 0x27a),
                       *(undefined2 *)((int)param_1 + 0x27e),*(undefined2 *)((int)param_1 + 0x282));
    thunk_FUN_004acf20(pSVar1,DAT_008032b8,0x10);
    thunk_FUN_004acfe0(pSVar1,'\x0e');
    uVar3 = thunk_FUN_004acd30(pSVar1,'\r');
    *(undefined4 *)((int)param_1 + 0x296) = uVar3;
    uVar3 = thunk_FUN_004acd30(pSVar1,'\x0e');
    *(undefined4 *)((int)param_1 + 0x29e) = uVar3;
  }
  *(undefined4 *)((int)param_1 + 0x2a7) = *(undefined4 *)(DAT_00802a38 + 0xe4);
  return 0;
}

