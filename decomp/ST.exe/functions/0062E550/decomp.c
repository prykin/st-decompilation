
uint __thiscall FUN_0062e550(void *this,int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;

  uVar1 = thunk_FUN_0062db50(this,param_1,param_3);
  if ((int)uVar1 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = STManRub3C::AddNewColl3(this,param_1,param_2,param_3,uVar1);
    if (-1 < (int)uVar2) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar3 = *(int *)((int)this + param_1 * 4 + 0x50);
      if (uVar1 < *(uint *)(iVar3 + 0xc)) {
        iVar3 = *(int *)(iVar3 + 8) * uVar1 + *(int *)(iVar3 + 0x1c);
      }
      else {
        iVar3 = 0;
      }
      iVar4 = 0;
      piVar5 = (int *)(iVar3 + 0x10);
      do {
        if (*piVar5 == 0) {
          *(int *)(iVar3 + 0x10 + iVar4 * 4) = param_2;
          *(int *)(iVar3 + 0xc) = *(int *)(iVar3 + 0xc) + 1;
          return uVar2;
        }
        iVar4 = iVar4 + 1;
        piVar5 = piVar5 + 1;
      } while (iVar4 < 3);
      return uVar2;
    }
  }
  return uVar2;
}

