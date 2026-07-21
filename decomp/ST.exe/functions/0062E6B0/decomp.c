
undefined4 __thiscall FUN_0062e6b0(void *this,int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;

  uVar2 = thunk_FUN_0062db50(this,param_1,param_2);
  if (-1 < (int)uVar2) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar1 = *(int *)((int)this + param_1 * 4 + 0x50);
    if (uVar2 < *(uint *)(iVar1 + 0xc)) {
      piVar3 = (int *)(*(int *)(iVar1 + 8) * uVar2 + *(int *)(iVar1 + 0x1c));
    }
    else {
      piVar3 = (int *)0x0;
    }
    thunk_FUN_0062e240(this,param_1,(int)*(short *)((int)piVar3 + 6),(int)(short)piVar3[2],
                       (int)*(short *)((int)piVar3 + 10),*piVar3,1);
    return 1;
  }
  return 0;
}

