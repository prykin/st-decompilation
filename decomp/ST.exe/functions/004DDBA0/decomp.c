
undefined4 __thiscall FUN_004ddba0(void *this,int param_1)

{
  int uVar1;
  uint uVar2;
  int iVar3;

  uVar1 = GetPlayerRaceId(*(char *)((int)this + 0x24));
  uVar2 = uVar1 & 0xff;
  if (uVar2 == 1) {
    iVar3 = 0x17;
  }
  else if (uVar2 == 2) {
    iVar3 = 0x88;
  }
  else if (uVar2 == 3) {
    iVar3 = 0x78;
  }
  else {
    iVar3 = 0;
  }
  iVar3 = thunk_FUN_004e60d0(*(int *)((int)this + 0x24),iVar3);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  return *(undefined4 *)(&DAT_007e601c + (iVar3 + param_1 * 5 + -0x2ee) * 4);
}

