
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\specpan.cpp
   ProdPanelTy::PaintTab */

void __thiscall
ProdPanelTy::PaintTab(ProdPanelTy *this,AnonShape_0053FCD0_D10A885A *param_1,undefined *param_2)

{
  AnonNested_0053FCD0_0014_03E531EF *pAVar1;
  code *pcVar2;
  ProdPanelTy *pPVar3;
  int *piVar4;
  undefined4 uVar5;
  LPSTR pCVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int iVar7;
  int iVar8;
  InternalExceptionFrame local_58;
  ProdPanelTy *local_14;
  int local_10;
  int local_c;
  ushort *local_8;
  
  pAVar1 = param_1->field_0014;
  local_8 = (ushort *)0x0;
  local_10 = pAVar1->field_000C - this->field_003C;
  if (this->field_005C == 0) {
    local_c = pAVar1->field_0010 - DAT_00806734;
  }
  else {
    local_c = pAVar1->field_0010 - this->field_0044;
  }
  if (param_2 != (undefined *)0x0) {
    local_58.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_58;
    local_14 = this;
    piVar4 = (int *)Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0,unaff_EDI,unaff_ESI);
    if (piVar4 == (int *)0x0) {
      iVar8 = 1;
      uVar5 = (*(code *)param_2)(param_1);
      iVar7 = 2;
      pCVar6 = thunk_FUN_00571240(s_BUT_BLDTAB_007c7af4,0);
      pCVar6 = FUN_006f2c00(pCVar6,iVar7,uVar5);
      local_8 = cMf32::RecGet(DAT_00806790,1,pCVar6,piVar4,iVar8);
      iVar7 = local_c;
      pPVar3 = local_14;
      DibPut((AnonShape_006B84D0_7C7D97C6 *)local_14->field_0068,local_10,local_c,'\x01',
             (byte *)local_8);
      cMf32::RecMemFree(DAT_00806790,(uint *)&local_8);
      if (param_1->field_0014->field_0004 == 3) {
        iVar8 = 1;
        piVar4 = (int *)0x0;
        pCVar6 = thunk_FUN_00571240(s_BUT_BLDFRAME_007c7ae4,0);
        local_8 = cMf32::RecGet(DAT_00806790,6,pCVar6,piVar4,iVar8);
        DibPut((AnonShape_006B84D0_7C7D97C6 *)pPVar3->field_0068,local_10,iVar7,'\x06',
               (byte *)local_8);
        cMf32::RecMemFree(DAT_00806790,(uint *)&local_8);
      }
      Library::DKW::DDX::FUN_006b3640
                (DAT_008075a8,pPVar3->field_0060,0xffffffff,pPVar3->field_003C,pPVar3->field_0044);
      g_currentExceptionFrame = local_58.previous;
      return;
    }
    g_currentExceptionFrame = local_58.previous;
    iVar7 = ReportDebugMessage(s_E____titans_Andrey_specpan_cpp_007c7870,0x255,0,(int)piVar4,
                               &DAT_007a4ccc,s_ProdPanelTy__PaintTab_007c7ac8);
    if (iVar7 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    RaiseInternalException((int)piVar4,0,s_E____titans_Andrey_specpan_cpp_007c7870,0x255);
  }
  return;
}

