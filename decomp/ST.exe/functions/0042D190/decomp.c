
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::ResetActivityFromObjs */

void __thiscall
STAllPlayersC::ResetActivityFromObjs
          (STAllPlayersC *this,uint param_1,int param_2,int param_3,uint param_4,int param_5)

{
  code *pcVar1;
  STGameObjC *pSVar2;
  int iVar3;
  uint uVar4;
  int unaff_EDI;
  STAllPlayersC_GetObjPtr_param_3Enum SVar5;
  
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
            (pSVar2 = (STGameObjC *)GetObjPtr(this,param_1,param_4,CASE_1),
            pSVar2 != (STGameObjC *)0x0)) &&
           ((**(code **)(pSVar2->field_0000 + 0xe8))(0), param_5 != 0)) {
          STGameObjC::ResetSelfCheckFlag(pSVar2,unaff_EDI);
        }
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < iVar3);
      return;
    }
    if (param_2 < 0x5b) {
      if (param_2 == 0x5a) {
        SVar5 = CASE_4;
LAB_0042d1c3:
        pSVar2 = (STGameObjC *)GetObjPtr(this,param_1,param_4,SVar5);
        if (pSVar2 == (STGameObjC *)0x0) {
          return;
        }
        iVar3 = 0;
        (**(code **)(pSVar2->field_0000 + 0xe8))();
        goto LAB_0042d2c3;
      }
      if (param_2 == 0) {
        return;
      }
      if (param_2 == 0x3c) goto LAB_0042d1f8;
    }
    else if (param_2 == 0x172) {
      SVar5 = CASE_2;
      goto LAB_0042d1c3;
    }
LAB_0042d270:
    iVar3 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x406,0,0,&DAT_007a4ccc,
                               s_STAllPlayersC__ResetActivityFrom_007a6368);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    if (param_2 == 0x1a4) {
      pSVar2 = (STGameObjC *)GetObjPtr(this,param_1,param_4,CASE_5);
      if (pSVar2 == (STGameObjC *)0x0) {
        return;
      }
      iVar3 = 0;
      (**(code **)(pSVar2->field_0000 + 0xe8))();
      if (param_5 == 0) {
        return;
      }
      STGameObjC::ResetSelfCheckFlag(pSVar2,iVar3);
      return;
    }
    if (param_2 == 0x1ae) {
      SVar5 = CASE_3;
    }
    else {
      if (param_2 != 0x1b8) goto LAB_0042d270;
      SVar5 = CASE_6;
    }
    pSVar2 = (STGameObjC *)GetObjPtr(this,param_1,param_4,SVar5);
    if (pSVar2 == (STGameObjC *)0x0) {
      return;
    }
    iVar3 = 0;
    (**(code **)(pSVar2->field_0000 + 0xe8))();
LAB_0042d2c3:
    if (param_5 != 0) {
      STGameObjC::ResetSelfCheckFlag(pSVar2,iVar3);
      return;
    }
  }
  return;
}

