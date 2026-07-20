
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::SetActivityToObjs */

void __thiscall
STAllPlayersC::SetActivityToObjs
          (STAllPlayersC *this,uint param_1,int param_2,int param_3,uint param_4)

{
  code *pcVar1;
  uint objPtr;
  int *piVar2;
  int iVar3;
  uint uVar4;
  STAllPlayersC_GetObjPtr_param_3Enum SVar5;
  
  objPtr = param_1;
  if (0x19a < param_2) {
    if (param_2 == 0x1a4) {
      piVar2 = (int *)GetObjPtr(this,param_1,param_4,CASE_5);
      if (piVar2 == (int *)0x0) {
        return;
      }
      (**(code **)(*piVar2 + 0xe8))(1);
      return;
    }
    if (param_2 == 0x1ae) {
      SVar5 = CASE_3;
    }
    else {
      if (param_2 != 0x1b8) goto LAB_0042d41b;
      SVar5 = CASE_6;
    }
    goto cf_common_exit_0042D44C;
  }
  if (param_2 == 0x19a) {
LAB_0042d3b2:
    uVar4 = 0;
    param_4 = *(uint *)(param_3 + 0xc);
    if ((int)param_4 < 1) {
      return;
    }
    do {
      FUN_006acc70(param_3,uVar4,&param_1);
      if (((short)param_1 != -1) &&
         (piVar2 = (int *)GetObjPtr(this,objPtr,param_1,CASE_1), piVar2 != (int *)0x0)) {
        (**(code **)(*piVar2 + 0xe8))(1);
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < (int)param_4);
    return;
  }
  if (param_2 < 0x5b) {
    if (param_2 == 0x5a) {
      SVar5 = CASE_4;
cf_common_exit_0042D44C:
      piVar2 = (int *)GetObjPtr(this,param_1,param_4,SVar5);
      if (piVar2 == (int *)0x0) {
        return;
      }
      (**(code **)(*piVar2 + 0xe8))(1);
      return;
    }
    if (param_2 == 0) {
      return;
    }
    if (param_2 == 0x3c) goto LAB_0042d3b2;
  }
  else if (param_2 == 0x172) {
    SVar5 = CASE_2;
    goto cf_common_exit_0042D44C;
  }
LAB_0042d41b:
  iVar3 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x43d,0,0,&DAT_007a4ccc,
                             s_STAllPlayersC__SetActivityToObjs_007a63a4);
  if (iVar3 == 0) {
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

