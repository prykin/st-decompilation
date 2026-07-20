
/* [STPrototypeApplier] Propagated return.
   Evidence: 00674FB0 returns data at 00400000 @ 00675294 */

IMAGE_DOS_HEADER * __cdecl FUN_00674fb0(int param_1)

{
  uint uVar1;
  byte bVar2;
  
  if ((param_1 < 0x32) || (0x73 < param_1)) {
    if ((param_1 < 1) || (0x28 < param_1)) {
      return (IMAGE_DOS_HEADER *)0x0;
    }
    uVar1 = param_1 + 0x41;
    bVar2 = (byte)uVar1;
    if (((&DAT_00801000)[uVar1 >> 5] & 1 << (bVar2 & 0x1f)) != 0) {
      return (IMAGE_DOS_HEADER *)0x40000;
    }
    if (((&DAT_00801010)[uVar1 >> 5] & 1 << (bVar2 & 0x1f)) != 0) {
      return (IMAGE_DOS_HEADER *)0x80000;
    }
    if (((&DAT_00800f00)[uVar1 >> 5] & 1 << (bVar2 & 0x1f)) != 0) {
      return (IMAGE_DOS_HEADER *)0x10000;
    }
    if (((&DAT_00801370)[uVar1 >> 5] & 1 << (bVar2 & 0x1f)) != 0) {
      return (IMAGE_DOS_HEADER *)0x20000;
    }
    if (((&DAT_00800fa0)[uVar1 >> 5] & 1 << (bVar2 & 0x1f)) != 0) {
      return (IMAGE_DOS_HEADER *)0x100000;
    }
    if (((&DAT_00800ff0)[uVar1 >> 5] & 1 << (bVar2 & 0x1f)) == 0) {
      if ((*(uint *)(&DAT_00801460 + (uVar1 >> 5) * 4) & 1 << (bVar2 & 0x1f)) != 0) {
        return &IMAGE_DOS_HEADER_00400000;
      }
      return (IMAGE_DOS_HEADER *)
             ((-(uint)((1 << (bVar2 & 0x1f) & (&DAT_00800fe0)[uVar1 >> 5]) != 0) & 0x80800000) +
             0x80000000);
    }
    return (IMAGE_DOS_HEADER *)0x200000;
  }
  uVar1 = param_1 - 0x32;
  bVar2 = (byte)uVar1;
  if (((&DAT_00801420)[uVar1 >> 5] & 1 << (bVar2 & 0x1f)) != 0) {
    return (IMAGE_DOS_HEADER *)0x1;
  }
  if (((&DAT_008013e0)[uVar1 >> 5] & 1 << (bVar2 & 0x1f)) != 0) {
    return (IMAGE_DOS_HEADER *)0x2;
  }
  if (((&DAT_00800ee0)[uVar1 >> 5] & 1 << (bVar2 & 0x1f)) != 0) {
    return (IMAGE_DOS_HEADER *)0x4;
  }
  if (((&DAT_00801490)[uVar1 >> 5] & 1 << (bVar2 & 0x1f)) != 0) {
    return (IMAGE_DOS_HEADER *)0x8;
  }
  if (((&DAT_00800f20)[uVar1 >> 5] & 1 << (bVar2 & 0x1f)) != 0) {
    return (IMAGE_DOS_HEADER *)0x10;
  }
  if (((&DAT_00800ef0)[uVar1 >> 5] & 1 << (bVar2 & 0x1f)) != 0) {
    return (IMAGE_DOS_HEADER *)0x20;
  }
  if (((&DAT_00801430)[uVar1 >> 5] & 1 << (bVar2 & 0x1f)) != 0) {
    return (IMAGE_DOS_HEADER *)0x40;
  }
  if (((&DAT_00801440)[uVar1 >> 5] & 1 << (bVar2 & 0x1f)) != 0) {
    return (IMAGE_DOS_HEADER *)0x80;
  }
  return (IMAGE_DOS_HEADER *)
         ((-(uint)((1 << (bVar2 & 0x1f) & (&DAT_00800f60)[uVar1 >> 5]) != 0) & 0xffff8100) + 0x8000)
  ;
}

