
undefined4 FUN_00681140(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = DAT_008488b0;
  iVar3 = DAT_008488b0 * 0x2b14;
  if (*(int *)(&DAT_00811c7c + iVar3) < 1) {
    return 0;
  }
  if (*(int *)(&DAT_00811c7c + iVar3) < 2) {
    (&DAT_00811c84)[DAT_008488b0 * 0xac5] = 0xff;
  }
  if (*(int *)(&DAT_00811c7c + iVar3) < 3) {
    (&DAT_00811c88)[iVar1 * 0xac5] = 0xff;
  }
  if (*(int *)(&DAT_00811c7c + iVar3) < 4) {
    (&DAT_00811c8c)[iVar1 * 0xac5] = 0x19;
  }
  if (*(int *)(&DAT_00811c7c + iVar3) < 5) {
    (&DAT_00811c90)[iVar1 * 0xac5] = 0xffffffff;
  }
  if (*(int *)(&DAT_00811c7c + iVar3) < 6) {
    *(undefined4 *)(&DAT_00811c94 + iVar1 * 0x158a) = 0xffffffff;
  }
  if (*(int *)(&DAT_00811c7c + iVar3) < 7) {
    *(undefined4 *)(&DAT_00811c98 + iVar1 * 0x158a) = 0xffffffff;
  }
  if (*(int *)(&DAT_00811c7c + iVar3) < 8) {
    *(undefined4 *)(&DAT_00811c9c + iVar3) = 0xffffffff;
  }
  if (*(int *)(&DAT_00811ae8 + iVar3) < 1) {
    uVar2 = thunk_FUN_0067eea0(PTR_s___EMPTY___0079d734);
    (&DAT_00811aec)[iVar1 * 0xac5] = uVar2;
  }
  if ((int)(&DAT_00811c8c)[iVar1 * 0xac5] < 0) {
    (&DAT_00811c8c)[iVar1 * 0xac5] = 0;
  }
  if (0x31 < (int)(&DAT_00811c8c)[iVar1 * 0xac5]) {
    (&DAT_00811c8c)[iVar1 * 0xac5] = 0x32;
  }
  return 1;
}

