
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::ResetActivityFromObjs */

void __thiscall
STAllPlayersC::ResetActivityFromObjs
          (STAllPlayersC *this,uint param_1,int param_2,DArrayTy *param_3,uint param_4,int param_5)

{
  dword dVar1;
  code *pcVar2;
  STGameObjC *pSVar3;
  int iVar4;
  uint uVar5;
  int unaff_EDI;
  STAllPlayersC_GetObjPtr_param_3Enum SVar6;
  
  if (param_2 < 0x19b) {
    if (param_2 == 0x19a) {
LAB_0042d1f8:
      uVar5 = 0;
      dVar1 = param_3->count;
      if ((int)dVar1 < 1) {
        return;
      }
      do {
        FUN_006acc70((AnonShape_006ACC70_C8641025 *)param_3,uVar5,&param_4);
        if ((((short)param_4 != -1) &&
            (pSVar3 = (STGameObjC *)GetObjPtr(this,param_1,param_4,CASE_1),
            pSVar3 != (STGameObjC *)0x0)) &&
           ((**(code **)(pSVar3->field_0000 + 0xe8))(0), param_5 != 0)) {
          STGameObjC::ResetSelfCheckFlag(pSVar3,unaff_EDI);
        }
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < (int)dVar1);
      return;
    }
    if (param_2 < 0x5b) {
      if (param_2 == 0x5a) {
        SVar6 = CASE_4;
LAB_0042d1c3:
        pSVar3 = (STGameObjC *)GetObjPtr(this,param_1,param_4,SVar6);
        if (pSVar3 == (STGameObjC *)0x0) {
          return;
        }
        iVar4 = 0;
        (**(code **)(pSVar3->field_0000 + 0xe8))();
        goto LAB_0042d2c3;
      }
      if (param_2 == 0) {
        return;
      }
      if (param_2 == 0x3c) goto LAB_0042d1f8;
    }
    else if (param_2 == 0x172) {
      SVar6 = CASE_2;
      goto LAB_0042d1c3;
    }
LAB_0042d270:
    iVar4 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x406,0,0,&DAT_007a4ccc,
                               s_STAllPlayersC__ResetActivityFrom_007a6368);
    if (iVar4 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    if (param_2 == 0x1a4) {
      pSVar3 = (STGameObjC *)GetObjPtr(this,param_1,param_4,CASE_5);
      if (pSVar3 == (STGameObjC *)0x0) {
        return;
      }
      iVar4 = 0;
      (**(code **)(pSVar3->field_0000 + 0xe8))();
      if (param_5 == 0) {
        return;
      }
      STGameObjC::ResetSelfCheckFlag(pSVar3,iVar4);
      return;
    }
    if (param_2 == 0x1ae) {
      SVar6 = CASE_3;
    }
    else {
      if (param_2 != 0x1b8) goto LAB_0042d270;
      SVar6 = CASE_6;
    }
    pSVar3 = (STGameObjC *)GetObjPtr(this,param_1,param_4,SVar6);
    if (pSVar3 == (STGameObjC *)0x0) {
      return;
    }
    iVar4 = 0;
    (**(code **)(pSVar3->field_0000 + 0xe8))();
LAB_0042d2c3:
    if (param_5 != 0) {
      STGameObjC::ResetSelfCheckFlag(pSVar3,iVar4);
      return;
    }
  }
  return;
}

