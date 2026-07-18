
void __fastcall thunk_FUN_00602be0(int *param_1)

{
  void *pvVar1;
  int iVar2;
  undefined4 *puVar3;
  int iStack_c;
  int iStack_8;
  
  if ((*(int *)((int)param_1 + 0x39b) < 0) && (iVar2 = thunk_FUN_006029c0(), iVar2 == 0)) {
    return;
  }
  if (*(int *)((int)param_1 + 0x36e) == 2) {
    if (*(char *)((int)param_1 + 0x37a) == '\x01') {
      FUN_006e9350(*(void **)((int)param_1 + 0x211),*(uint *)((int)param_1 + 0x1ed),
                   *(uint *)(DAT_00806724 + 0x30 + *(int *)((int)param_1 + 0x397) * 4),
                   (int)*(short *)(DAT_00806724 + 0x2c));
    }
    if ((*(byte *)(DAT_00802a38 + 0xe4) & 3) == 0) {
      *(int *)((int)param_1 + 0x397) =
           *(int *)((int)param_1 + 0x397) + (int)*(char *)((int)param_1 + 0x39f);
    }
    if (*(char *)((int)param_1 + 0x39f) < '\x01') {
      if (*(int *)((int)param_1 + 0x397) < 0) {
        FUN_006e9350(*(void **)((int)param_1 + 0x211),*(uint *)((int)param_1 + 0x1ed),0,0);
        *(undefined4 *)((int)param_1 + 0x36e) = 1;
      }
    }
    else if (((int)*(short *)(DAT_00806724 + 0x23) <= *(int *)((int)param_1 + 0x397)) &&
            (*(undefined4 *)((int)param_1 + 0x36e) = 0, *(char *)((int)param_1 + 0x37a) == '\x01'))
    {
      thunk_FUN_004ad430((int)param_1 + 0x1d5);
      *(undefined1 *)((int)param_1 + 0x37a) = 0;
    }
  }
  else if (*(int *)((int)param_1 + 0x36e) != 4) {
    puVar3 = thunk_FUN_00602e90();
    *(undefined4 **)((int)param_1 + 0x3ab) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      thunk_FUN_004ad310((int)param_1 + 0x1d5);
      *(undefined4 *)((int)param_1 + 0x39b) = 0xffffffff;
      *(undefined4 *)((int)param_1 + 0x36e) = 4;
    }
  }
  pvVar1 = DAT_00802a88;
  if ((DAT_00802a88 != (void *)0x0) && (-1 < *(int *)((int)param_1 + 0x39b))) {
    iVar2 = (int)*(short *)((int)param_1 + 0x259);
    if (((DAT_0080874d != -1) &&
        ((((*(int *)((int)DAT_00802a88 + 0xf8) != 0 &&
           (thunk_FUN_00558c00(DAT_00802a88,*(undefined4 *)((int)DAT_00802a88 + 0x10c),
                               (int)*(short *)((int)param_1 + 0x255),
                               (int)*(short *)((int)param_1 + 599),&iStack_8,&iStack_c), -1 < iVar2)
           ) && (iVar2 < 5)) && ((-1 < iStack_8 && (iStack_8 < *(int *)((int)pvVar1 + 0x30))))))) &&
       ((iStack_c = (&DAT_0079aed0)[iVar2] + iStack_c, -1 < iStack_c &&
        (((iStack_c < *(int *)((int)pvVar1 + 0x34) && (*(int *)((int)pvVar1 + 0x4c) != 0)) &&
         (*(char *)(iStack_c * *(int *)((int)pvVar1 + 0x30) + *(int *)((int)pvVar1 + 0x4c) +
                   iStack_8) == '\0')))))) {
      if (*(char *)((int)param_1 + 0x37a) == '\0') {
        return;
      }
      thunk_FUN_004ad430((int)param_1 + 0x1d5);
      *(undefined1 *)((int)param_1 + 0x37a) = 0;
      return;
    }
    (**(code **)(*param_1 + 0xd8))();
    if (*(char *)((int)param_1 + 0x37a) == '\0') {
      thunk_FUN_004ad460((void *)((int)param_1 + 0x1d5),0);
      *(undefined1 *)((int)param_1 + 0x37a) = 1;
      return;
    }
  }
  return;
}

