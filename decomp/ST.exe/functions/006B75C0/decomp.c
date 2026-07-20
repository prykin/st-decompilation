
/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: 006B75C0 -> 006B7510 @ 006B7602 | 006B75C0 -> 006B7510 @ 006B762A */

int FUN_006b75c0(int *param_1,int param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  piVar1 = param_3;
  iVar2 = Library::DKW::DDX::FUN_006b7510(param_1,(int)param_3,(int *)&param_3,-1,0);
  if (iVar2 == 0) {
    if ((0 < param_2) && ((int)param_3 < 1)) {
      DVar3 = timeGetTime();
      iVar2 = Library::DKW::DDX::FUN_006b7510(param_1,(int)piVar1,(int *)&param_3,-1,0);
      if (iVar2 != 0) {
        return iVar2;
      }
      while (((int)param_3 < 1 && (DVar4 = timeGetTime(), (int)(DVar4 - DVar3) < param_2))) {
        iVar2 = Library::DKW::DDX::FUN_006b7510(param_1,(int)piVar1,(int *)&param_3,-1,0);
        if (iVar2 != 0) {
          return iVar2;
        }
      }
    }
    iVar2 = 0;
  }
  return iVar2;
}

