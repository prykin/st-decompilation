
void FUN_0042d190(uint param_1,int param_2,int param_3,uint param_4,int param_5)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  
  if (param_2 < 0x19b) {
    if (param_2 == 0x19a) {
LAB_0042d1f8:
      uVar4 = 0;
      iVar3 = *(int *)(param_3 + 0xc);
      if (iVar3 < 1) {
        return;
      }
      do {
        FUN_006acc70(param_3,uVar4,&param_4);
        if ((((short)param_4 != -1) &&
            (piVar2 = (int *)thunk_FUN_0042b620(param_1,param_4,1), piVar2 != (int *)0x0)) &&
           ((**(code **)(*piVar2 + 0xe8))(0), param_5 != 0)) {
          thunk_FUN_0041a680((int)piVar2);
        }
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < iVar3);
      return;
    }
    if (param_2 < 0x5b) {
      if (param_2 == 0x5a) {
        uVar5 = 4;
LAB_0042d1c3:
        piVar2 = (int *)thunk_FUN_0042b620(param_1,param_4,uVar5);
        if (piVar2 == (int *)0x0) {
          return;
        }
        (**(code **)(*piVar2 + 0xe8))(0);
        goto LAB_0042d2c3;
      }
      if (param_2 == 0) {
        return;
      }
      if (param_2 == 0x3c) goto LAB_0042d1f8;
    }
    else if (param_2 == 0x172) {
      uVar5 = 2;
      goto LAB_0042d1c3;
    }
LAB_0042d270:
    iVar3 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0x406,0,0,&DAT_007a4ccc);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    if (param_2 == 0x1a4) {
      piVar2 = (int *)thunk_FUN_0042b620(param_1,param_4,5);
      if (piVar2 == (int *)0x0) {
        return;
      }
      (**(code **)(*piVar2 + 0xe8))(0);
      if (param_5 == 0) {
        return;
      }
      thunk_FUN_0041a680((int)piVar2);
      return;
    }
    if (param_2 == 0x1ae) {
      uVar5 = 3;
    }
    else {
      if (param_2 != 0x1b8) goto LAB_0042d270;
      uVar5 = 6;
    }
    piVar2 = (int *)thunk_FUN_0042b620(param_1,param_4,uVar5);
    if (piVar2 == (int *)0x0) {
      return;
    }
    (**(code **)(*piVar2 + 0xe8))(0);
LAB_0042d2c3:
    if (param_5 != 0) {
      thunk_FUN_0041a680((int)piVar2);
      return;
    }
  }
  return;
}

