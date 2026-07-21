
uint __thiscall FUN_006960d0(void *this,uint param_1,int param_2)

{
  uint *puVar1;
  DArrayTy *pDVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  bool bVar7;

  iVar6 = *(int *)((int)this + 0x5853);
  if (iVar6 != 0) {
    if (param_1 < *(uint *)(iVar6 + 0xc)) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar6 = *(int *)(iVar6 + 8) * param_1 + *(int *)(iVar6 + 0x1c);
    }
    else {
      iVar6 = 0;
    }
    if (*(int *)(iVar6 + 0x19) == 0) {
      pDVar2 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,10,4,10);
      *(DArrayTy **)(iVar6 + 0x19) = pDVar2;
    }
    puVar1 = *(uint **)(iVar6 + 0x19);
    if (puVar1 != (uint *)0x0) {
      uVar4 = puVar1[3];
      uVar3 = 0;
      if (0 < (int)uVar4) {
        bVar7 = uVar4 != 0;
        while (((!bVar7 || (piVar5 = (int *)(puVar1[2] * uVar3 + puVar1[7]), piVar5 == (int *)0x0))
               || (*piVar5 != param_2))) {
          uVar3 = uVar3 + 1;
          bVar7 = uVar3 < uVar4;
          if ((int)uVar4 <= (int)uVar3) {
            uVar4 = Library::DKW::TBL::FUN_006ae1c0(puVar1,&param_2);
            return uVar4;
          }
        }
        if (-1 < (int)uVar3) {
          return uVar3;
        }
      }
      uVar4 = Library::DKW::TBL::FUN_006ae1c0(puVar1,&param_2);
      return uVar4;
    }
  }
  return 0xffffffff;
}

