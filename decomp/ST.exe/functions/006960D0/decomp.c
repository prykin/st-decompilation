
uint __thiscall FUN_006960d0(void *this,uint param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  bool bVar6;

  iVar5 = *(int *)((int)this + 0x5853);
  if (iVar5 != 0) {
    if (param_1 < *(uint *)(iVar5 + 0xc)) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar5 = *(int *)(iVar5 + 8) * param_1 + *(int *)(iVar5 + 0x1c);
    }
    else {
      iVar5 = 0;
    }
    if (*(int *)(iVar5 + 0x19) == 0) {
      puVar1 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,4,10);
      *(uint **)(iVar5 + 0x19) = puVar1;
    }
    puVar1 = *(uint **)(iVar5 + 0x19);
    if (puVar1 != (uint *)0x0) {
      uVar3 = puVar1[3];
      uVar2 = 0;
      if (0 < (int)uVar3) {
        bVar6 = uVar3 != 0;
        while (((!bVar6 || (piVar4 = (int *)(puVar1[2] * uVar2 + puVar1[7]), piVar4 == (int *)0x0))
               || (*piVar4 != param_2))) {
          uVar2 = uVar2 + 1;
          bVar6 = uVar2 < uVar3;
          if ((int)uVar3 <= (int)uVar2) {
            uVar3 = Library::DKW::TBL::FUN_006ae1c0(puVar1,&param_2);
            return uVar3;
          }
        }
        if (-1 < (int)uVar2) {
          return uVar2;
        }
      }
      uVar3 = Library::DKW::TBL::FUN_006ae1c0(puVar1,&param_2);
      return uVar3;
    }
  }
  return 0xffffffff;
}

