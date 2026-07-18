
uint __thiscall thunk_FUN_006191a0(void *this,uint param_1,int param_2)

{
  void *pvVar1;
  uint in_EAX;
  int iVar2;
  void *pvStack_8;
  
  if ((((*(int *)(DAT_00807598 + 0x48) <= (int)param_1) &&
       ((int)param_1 <= *(int *)(DAT_00807598 + 0x58))) &&
      (in_EAX = param_2, *(int *)(DAT_00807598 + 0x44) <= param_2)) &&
     (param_2 <= *(int *)(DAT_00807598 + 0x54))) {
    pvStack_8 = this;
    param_1 = FUN_006ddbd0();
    pvVar1 = DAT_00802a88;
    in_EAX = param_1;
    if ((param_1 == 0) || (DAT_00802a88 == (void *)0x0)) goto LAB_00619287;
    in_EAX = CONCAT31((int3)(param_1 >> 8),DAT_0080874d);
    iVar2 = (int)*(short *)((int)this + 0xcd);
    if ((DAT_0080874d == -1) || (in_EAX = 0, *(int *)((int)DAT_00802a88 + 0xf8) == 0))
    goto LAB_00619287;
    in_EAX = thunk_FUN_00558c00(DAT_00802a88,*(undefined4 *)((int)DAT_00802a88 + 0x10c),
                                (int)*(short *)((int)this + 0xc9),(int)*(short *)((int)this + 0xcb),
                                &param_2,(int *)&pvStack_8);
    if ((((iVar2 < 0) || (4 < iVar2)) || (param_2 < 0)) ||
       ((((*(int *)((int)pvVar1 + 0x30) <= param_2 ||
          (in_EAX = (&DAT_0079aed0)[iVar2] + (int)pvStack_8, (int)in_EAX < 0)) ||
         (*(int *)((int)pvVar1 + 0x34) <= (int)in_EAX)) ||
        ((*(int *)((int)pvVar1 + 0x4c) == 0 ||
         (in_EAX = (uint)*(byte *)(in_EAX * *(int *)((int)pvVar1 + 0x30) +
                                   *(int *)((int)pvVar1 + 0x4c) + param_2), in_EAX != 0))))))
    goto LAB_00619287;
  }
  param_1 = 0;
LAB_00619287:
  return CONCAT31((int3)(in_EAX >> 8),(undefined1)param_1);
}

