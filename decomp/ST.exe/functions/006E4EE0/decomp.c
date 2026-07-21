
/* WARNING: Removing unreachable block (ram,0x006e4efb) */

int __fastcall FUN_006e4ee0(int *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;

  iVar1 = param_1[0xb];
  iVar2 = *(int *)(iVar1 + 0xc);
  do {
    if (iVar2 == 0) {
LAB_006e4f26:
      iVar1 = AppClassTy::LifeToAllSystem((AppClassTy *)param_1,param_1[4]);
      if (iVar1 != 0) {
        param_1[7] = 1;
        return iVar1;
      }
      iVar1 = param_1[10];
      bVar3 = *(int *)(iVar1 + 0xc) == 0;
      if (!bVar3) {
        do {
          if (bVar3) {
            iVar1 = 0;
          }
          else {
            iVar1 = *(int *)(iVar1 + 0x1c);
          }
          iVar2 = FUN_006e3db0(iVar1);
          if (iVar2 == 0xffff) {
            param_1[7] = 1;
            return 0xffff;
          }
          FUN_006b0c70((DArrayTy *)param_1[10],0);
          iVar1 = param_1[10];
          bVar3 = *(int *)(iVar1 + 0xc) == 0;
        } while (!bVar3);
        if (iVar2 != 0) {
          return iVar2;
        }
      }
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar1 = (**(code **)(*param_1 + 0x14))();
      if (iVar1 != 0) {
        param_1[7] = 1;
        return iVar1;
      }
      return 0;
    }
    iVar1 = FUN_006e3db0(*(int *)(iVar1 + 0x1c));
    if (iVar1 == 0xffff) {
      param_1[7] = 1;
      goto LAB_006e4f26;
    }
    FUN_006b0c70((DArrayTy *)param_1[0xb],0);
    iVar1 = param_1[0xb];
    iVar2 = *(int *)(iVar1 + 0xc);
  } while( true );
}

