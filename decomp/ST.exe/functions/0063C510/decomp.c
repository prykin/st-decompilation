
int __thiscall FUN_0063c510(void *this,int param_1)

{
  STT3DSprC *this_00;
  short sVar1;
  VisibleClassTy *pVVar2;
  int iVar3;
  int iVar4;
  int local_10;
  int local_c;
  int local_8;

  iVar4 = param_1 - *(int *)((int)this + 0x28e);
  iVar4 = ((*(int *)((int)this + 0x292) * iVar4 - (*(int *)((int)this + 0x296) * iVar4 * iVar4) / 2)
          * 3) / 10;
  if (iVar4 < 2) {
    iVar4 = 1;
  }
  if (*(int *)((int)this + 0x29a) == 1) {
    iVar4 = *(short *)((int)this + 0x251) - iVar4;
    *(undefined4 *)((int)this + 0x27a) = *(undefined4 *)((int)this + 0x26e);
    *(int *)((int)this + 0x26e) = iVar4;
    if (iVar4 < *(int *)((int)this + 0x282)) {
      *(int *)((int)this + 0x26e) = *(int *)((int)this + 0x282);
    }
    if (*(int *)((int)this + 0x26e) < 1000) {
      SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00601500::thunk_FUN_00601500
                ((AnonReceiver_00601500 *)((int)this + 899),*(int *)((int)this + 0x266),
                 *(int *)((int)this + 0x26a),*(int *)((int)this + 0x26e),*(int *)((int)this + 0x272)
                 ,*(int *)((int)this + 0x276),*(int *)((int)this + 0x27a),
                 *(int *)((int)this + 0x235),50000,*(int *)((int)this + 0x25d),
                 *(undefined2 *)((int)this + 0x261),0xa8,0,0);
    }
  }
  iVar4 = thunk_FUN_0063cb30(this);
  if (iVar4 == 3) {
    if ((*(char *)((int)this + 0x29e) == '\x04') || (*(char *)((int)this + 0x29e) == '\x01')) {
      this_00 = (STT3DSprC *)((int)this + 0x1d5);
      thunk_FUN_004abce0(this_00,0xd,0,0x13,'\0');
      STT3DSprC::StartShow(this_00,0xd,g_playSystem_00802A38->field_00E4);
      *(undefined1 *)((int)this + 0x29f) = 1;
      thunk_FUN_004ac6b0(this_00,'\r');
      sub_00416240(this,*(undefined2 *)((int)this + 0x266),*(undefined2 *)((int)this + 0x26a),
                   *(undefined2 *)((int)this + 0x26e));
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*(int *)this + 0xd8))();
      pVVar2 = g_visibleClass_00802A88;
      if (g_visibleClass_00802A88 != (VisibleClassTy *)0x0) {
        iVar4 = *(int *)((int)this + 0x26e);
        sVar1 = (short)(iVar4 >> 0x1f);
        if (iVar4 < 0) {
          local_8 = (short)(((short)(iVar4 / 200) + sVar1) -
                           (short)((longlong)iVar4 * 0x51eb851f >> 0x3f)) + -1;
        }
        else {
          local_8 = (int)(short)(((short)(iVar4 / 200) + sVar1) -
                                (short)((longlong)iVar4 * 0x51eb851f >> 0x3f));
        }
        iVar4 = *(int *)((int)this + 0x26a);
        sVar1 = (short)(iVar4 >> 0x1f);
        if (iVar4 < 0) {
          iVar4 = (short)(((short)(iVar4 / 0xc9) + sVar1) -
                         (short)((longlong)iVar4 * 0x28c1979 >> 0x3f)) + -1;
        }
        else {
          iVar4 = (int)(short)(((short)(iVar4 / 0xc9) + sVar1) -
                              (short)((longlong)iVar4 * 0x28c1979 >> 0x3f));
        }
        iVar3 = *(int *)((int)this + 0x266);
        sVar1 = (short)(iVar3 >> 0x1f);
        if (iVar3 < 0) {
          iVar3 = (short)(((short)(iVar3 / 0xc9) + sVar1) -
                         (short)((longlong)iVar3 * 0x28c1979 >> 0x3f)) + -1;
        }
        else {
          iVar3 = (int)(short)(((short)(iVar3 / 0xc9) + sVar1) -
                              (short)((longlong)iVar3 * 0x28c1979 >> 0x3f));
        }
        if ((((((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) ||
              (VisibleClassTy::sub_00558C00
                         (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar3,iVar4,
                          &local_c,&local_10), local_8 < 0)) || ((4 < local_8 || (local_c < 0)))) ||
            ((pVVar2->field_0030 <= local_c ||
             ((local_10 = g_centeredOffsets5[local_8] + local_10, local_10 < 0 ||
              (pVVar2->field_0034 <= local_10)))))) ||
           ((pVVar2->field_004C == (byte *)0x0 ||
            (pVVar2->field_004C[local_c + local_10 * pVVar2->field_0030] != 0)))) {
          if (*(char *)((int)this + 0x29f) == '\0') {
            thunk_FUN_004ad460((void *)((int)this + 0x1d5),0);
            *(undefined1 *)((int)this + 0x29f) = 1;
          }
        }
        else if (*(char *)((int)this + 0x29f) != '\0') {
          thunk_FUN_004ad430((int)this + 0x1d5);
          *(undefined1 *)((int)this + 0x29f) = 0;
        }
      }
      *(undefined1 *)((int)this + 0x265) = 6;
      *(undefined1 *)((int)this + 0x29e) = 2;
      return 3;
    }
    if (*(int *)((int)this + 0x26e) == *(int *)((int)this + 0x282)) {
      return 4;
    }
  }
  return iVar4;
}

