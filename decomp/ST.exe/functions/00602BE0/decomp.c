
void __fastcall FUN_00602be0(int *param_1)

{
  VisibleClassTy *pVVar1;
  int iVar2;
  undefined4 *puVar3;
  int local_c;
  int local_8;
  
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
  pVVar1 = g_visibleClass_00802A88;
  if ((g_visibleClass_00802A88 != (VisibleClassTy *)0x0) && (-1 < *(int *)((int)param_1 + 0x39b))) {
    iVar2 = (int)*(short *)((int)param_1 + 0x259);
    if (((DAT_0080874d != -1) &&
        ((((g_visibleClass_00802A88->field_00F8 != 0 &&
           (thunk_FUN_00558c00(g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,
                               (int)*(short *)((int)param_1 + 0x255),
                               (int)*(short *)((int)param_1 + 599),&local_8,&local_c), -1 < iVar2))
          && (iVar2 < 5)) && ((-1 < local_8 && (local_8 < (int)pVVar1->field_0030)))))) &&
       ((local_c = (&DAT_0079aed0)[iVar2] + local_c, -1 < local_c &&
        (((local_c < (int)pVVar1->field_0034 && (pVVar1->field_004C != 0)) &&
         (*(char *)(local_c * pVVar1->field_0030 + pVVar1->field_004C + local_8) == '\0')))))) {
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

