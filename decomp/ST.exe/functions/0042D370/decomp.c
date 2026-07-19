
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::SetActivityToObjs */

void __thiscall
STAllPlayersC::SetActivityToObjs
          (STAllPlayersC *this,uint param_1,int param_2,int param_3,uint param_4)

{
  code *pcVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  STAllPlayersC_GetObjPtr_param_3Enum SVar6;
  
  uVar2 = param_1;
  if (0x19a < param_2) {
    if (param_2 == 0x1a4) {
      piVar3 = (int *)GetObjPtr(this,param_1,param_4,CASE_5);
      if (piVar3 == (int *)0x0) {
        return;
      }
      (**(code **)(*piVar3 + 0xe8))(1);
      return;
    }
    if (param_2 == 0x1ae) {
      SVar6 = CASE_3;
    }
    else {
      if (param_2 != 0x1b8) goto LAB_0042d41b;
      SVar6 = CASE_6;
    }
    goto cf_common_exit_0042D44C;
  }
  if (param_2 == 0x19a) {
LAB_0042d3b2:
    uVar5 = 0;
    param_4 = *(uint *)(param_3 + 0xc);
    if ((int)param_4 < 1) {
      return;
    }
    do {
      FUN_006acc70(param_3,uVar5,&param_1);
      if (((short)param_1 != -1) &&
         (piVar3 = (int *)GetObjPtr(this,uVar2,param_1,CASE_1), piVar3 != (int *)0x0)) {
        (**(code **)(*piVar3 + 0xe8))(1);
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < (int)param_4);
    return;
  }
  if (param_2 < 0x5b) {
    if (param_2 == 0x5a) {
      SVar6 = CASE_4;
cf_common_exit_0042D44C:
      piVar3 = (int *)GetObjPtr(this,param_1,param_4,SVar6);
      if (piVar3 == (int *)0x0) {
        return;
      }
      (**(code **)(*piVar3 + 0xe8))(1);
      return;
    }
    if (param_2 == 0) {
      return;
    }
    if (param_2 == 0x3c) goto LAB_0042d3b2;
  }
  else if (param_2 == 0x172) {
    SVar6 = CASE_2;
    goto cf_common_exit_0042D44C;
  }
LAB_0042d41b:
  iVar4 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x43d,0,0,&DAT_007a4ccc,
                             s_STAllPlayersC__SetActivityToObjs_007a63a4);
  if (iVar4 == 0) {
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

