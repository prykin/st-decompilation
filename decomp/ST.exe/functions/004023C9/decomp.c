
int __thiscall thunk_FUN_0063c510(void *this,int param_1)

{
  short sVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  
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
      thunk_FUN_00601500((void *)((int)this + 899),*(int *)((int)this + 0x266),
                         *(int *)((int)this + 0x26a),*(int *)((int)this + 0x26e),
                         *(int *)((int)this + 0x272),*(int *)((int)this + 0x276),
                         *(int *)((int)this + 0x27a),*(int *)((int)this + 0x235),50000,
                         *(int *)((int)this + 0x25d),*(undefined2 *)((int)this + 0x261),0xa8,0,0);
    }
  }
  iVar4 = thunk_FUN_0063cb30((int)this);
  if (iVar4 == 3) {
    if ((*(char *)((int)this + 0x29e) == '\x04') || (*(char *)((int)this + 0x29e) == '\x01')) {
      thunk_FUN_004abce0((void *)((int)this + 0x1d5),0xd,0,0x13,'\0');
      thunk_FUN_004ac1a0(0xd,*(undefined4 *)(DAT_00802a38 + 0xe4));
      *(undefined1 *)((int)this + 0x29f) = 1;
      thunk_FUN_004ac6b0((void *)((int)this + 0x1d5),'\r');
      thunk_FUN_00416240(this,*(undefined2 *)((int)this + 0x266),*(undefined2 *)((int)this + 0x26a),
                         *(undefined2 *)((int)this + 0x26e));
      (**(code **)(*(int *)this + 0xd8))();
      pvVar2 = DAT_00802a88;
      if (DAT_00802a88 != (void *)0x0) {
        iVar4 = *(int *)((int)this + 0x26e);
        sVar1 = (short)(iVar4 >> 0x1f);
        if (iVar4 < 0) {
          iStack_8 = (short)(((short)(iVar4 / 200) + sVar1) -
                            (short)((longlong)iVar4 * 0x51eb851f >> 0x3f)) + -1;
        }
        else {
          iStack_8 = (int)(short)(((short)(iVar4 / 200) + sVar1) -
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
        if ((((((DAT_0080874d == -1) || (*(int *)((int)DAT_00802a88 + 0xf8) == 0)) ||
              (thunk_FUN_00558c00(DAT_00802a88,*(undefined4 *)((int)DAT_00802a88 + 0x10c),iVar3,
                                  iVar4,&iStack_c,&iStack_10), iStack_8 < 0)) ||
             ((4 < iStack_8 || (iStack_c < 0)))) ||
            ((*(int *)((int)pvVar2 + 0x30) <= iStack_c ||
             ((iStack_10 = (&DAT_0079aed0)[iStack_8] + iStack_10, iStack_10 < 0 ||
              (*(int *)((int)pvVar2 + 0x34) <= iStack_10)))))) ||
           ((*(int *)((int)pvVar2 + 0x4c) == 0 ||
            (*(char *)(iStack_10 * *(int *)((int)pvVar2 + 0x30) + *(int *)((int)pvVar2 + 0x4c) +
                      iStack_c) != '\0')))) {
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

