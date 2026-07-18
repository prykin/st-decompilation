
void __thiscall FUN_00639500(void *this,undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)*(short *)((int)this + 0x245);
  *(int *)((int)this + 0x282) = (int)*(short *)((int)this + 0x249);
  *(int *)((int)this + 0x27a) = iVar1;
  iVar2 = (int)*(short *)((int)this + 0x247);
  *(int *)((int)this + 0x27e) = iVar2;
  *(int *)((int)this + 0x25f) = *(short *)((int)this + 0x24b) - iVar1;
  *(int *)((int)this + 0x263) = *(short *)((int)this + 0x24d) - iVar2;
  iVar1 = FUN_006aced8(iVar1,iVar2,(int)*(short *)((int)this + 0x24b),
                       (int)*(short *)((int)this + 0x24d));
  *(int *)((int)this + 0x267) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((int)this + 0x267) = 1;
  }
  iVar1 = (*(int *)((int)this + 0x267) + -100) / 0x32;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  *(int *)((int)this + 0x26b) =
       (((&DAT_007d1dc0)[iVar1 * 3] * (int)*(short *)((int)this + 0x249) +
        (&DAT_007d1dc4)[iVar1 * 3]) * (int)*(short *)((int)this + 0x249) +
       (&DAT_007d1dc8)[iVar1 * 3]) / 0x19a28;
  *(undefined4 *)((int)this + 0x2a3) = param_1;
  if (*(int *)((int)this + 0x251) != 0) {
    *(undefined1 *)((int)this + 0x26f) = 1;
  }
  return;
}

