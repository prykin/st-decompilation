
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::_ChangeDock */

void STAllPlayersC::_ChangeDock(undefined4 param_1,int *param_2,uint param_3)

{
  int iVar1;
  code *pcVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  piVar3 = param_2;
  param_2 = (int *)thunk_FUN_0042b620((uint)param_2,param_3,1);
  if (param_2 == (int *)0x0) {
    iVar4 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0x21ed,0,0,&DAT_007a4ccc);
    if (iVar4 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7a6004,0x21ee);
  }
  iVar4 = (**(code **)(*param_2 + 0x2c))();
  if ((((iVar4 == 0x33) &&
       (iVar4 = *(int *)((int)&DAT_007f4e24 + (int)piVar3 * 0xa62 + 1), iVar4 != 0)) &&
      (iVar1 = *(int *)(iVar4 + 0xc), iVar1 != 0)) && (uVar6 = 0, 0 < iVar1)) {
    do {
      FUN_006acc70(iVar4,uVar6,&param_2);
      if (param_2 != (int *)0x0) {
        iVar5 = (**(code **)(*param_2 + 0xc))();
        if (iVar5 == 4) {
          (**(code **)(*param_2 + 0x14))(param_1,param_3);
        }
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < iVar1);
  }
  return;
}

