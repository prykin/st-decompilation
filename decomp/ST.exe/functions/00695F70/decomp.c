
uint __thiscall FUN_00695f70(void *this,uint param_1,int param_2,int param_3)

{
  DArrayTy *pDVar1;
  uint uVar2;
  int iVar3;
  undefined2 local_c;
  int iStack_a;

  iVar3 = *(int *)((int)this + 0x5853);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (((iVar3 == 0) || (*(uint *)(iVar3 + 0xc) <= param_1)) ||
     (iVar3 = *(int *)(iVar3 + 8) * param_1 + *(int *)(iVar3 + 0x1c), iVar3 == 0)) {
LAB_00696007:
    uVar2 = 0xffffffff;
  }
  else {
    if (*(int *)(iVar3 + 0x15) == 0) {
      pDVar1 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,10,6,10);
      *(DArrayTy **)(iVar3 + 0x15) = pDVar1;
      if (pDVar1 == (DArrayTy *)0x0) goto LAB_00696007;
    }
    local_c = 0;
    iStack_a = param_2;
    uVar2 = Library::DKW::TBL::FUN_006ae1c0(*(uint **)(iVar3 + 0x15),(undefined4 *)&local_c);
    if (-1 < (int)uVar2) {
      *(uint *)(iVar3 + 0x11) = uVar2 + 1;
      if (*(int *)((int)this + 0x584f) != 0) {
        *(undefined2 *)
         (*(int *)((int)this + 0x584f) + (*(int *)((int)this + 0x582f) * param_3 + param_2) * 2) =
             (undefined2)param_1;
        return uVar2;
      }
    }
  }
  return uVar2;
}

