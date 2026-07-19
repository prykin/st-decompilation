
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\optpanel.cpp
   OptPanelTy::CreateSlider */

undefined4 __thiscall
OptPanelTy::CreateSlider
          (OptPanelTy *this,int param_1,int param_2,int param_3,int param_4,undefined4 param_5,
          undefined4 param_6,undefined4 param_7,int param_8)

{
  code *pcVar1;
  OptPanelTy *pOVar2;
  int iVar3;
  LPSTR pCVar4;
  int iVar5;
  undefined4 unaff_ESI;
  uint *puVar6;
  void *unaff_EDI;
  uint *puVar7;
  undefined4 uVar8;
  int *piVar9;
  int iVar10;
  uint local_42c [6];
  undefined4 local_414;
  undefined4 local_410;
  undefined4 local_3c4;
  undefined4 local_3c0;
  undefined4 local_3bc;
  undefined4 local_31c;
  undefined4 local_318;
  undefined4 local_314;
  undefined4 local_310;
  undefined4 local_2a8;
  uint local_2a4 [26];
  undefined4 local_23c;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_6c;
  undefined4 local_68;
  InternalExceptionFrame local_54;
  OptPanelTy *local_10;
  ushort *local_c;
  undefined4 local_8;
  
  local_8 = 0;
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_10 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pOVar2 = local_10;
  if (iVar3 == 0) {
    puVar6 = local_42c;
    for (iVar3 = 0xf6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    iVar10 = 1;
    piVar9 = (int *)0x0;
    uVar8 = 0;
    local_6c = param_6;
    local_84 = *(undefined4 *)&pOVar2->field_0x8;
    local_68 = param_7;
    iVar3 = 1;
    local_42c[0] = (uint)(param_8 != 0);
    local_80 = 2;
    local_7c = param_5;
    local_2a8 = 2;
    local_42c[1] = 2;
    local_318 = 1;
    local_31c = 1;
    local_42c[3] = 2;
    local_42c[2] = local_42c[0];
    pCVar4 = thunk_FUN_00571240(s_BUT_MINUS_007c718c,0);
    pCVar4 = FUN_006f2c00(pCVar4,iVar3,uVar8);
    local_c = cMf32::RecGet(DAT_00806790,1,pCVar4,piVar9,iVar10);
    local_414 = *(undefined4 *)(local_c + 2);
    local_410 = *(undefined4 *)(local_c + 4);
    cMf32::RecMemFree(DAT_00806790,(uint *)&local_c);
    iVar3 = pOVar2->field_003C;
    local_42c[4] = iVar3 + param_3;
    iVar10 = pOVar2->field_005C;
    if (iVar10 == 0) {
      iVar5 = -pOVar2->field_0048;
    }
    else {
      iVar5 = pOVar2->field_0044;
    }
    local_3c0 = 2;
    local_42c[5] = iVar5 + param_4;
    local_3c4 = *(undefined4 *)&pOVar2->field_0x8;
    local_3bc = 0xc005;
    local_314 = 500;
    local_310 = 0x32;
    puVar6 = local_42c + 2;
    puVar7 = local_2a4;
    for (iVar5 = 0x5f; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    local_2a4[2] = iVar3 + param_1;
    if (iVar10 == 0) {
      iVar3 = -pOVar2->field_0048;
    }
    else {
      iVar3 = pOVar2->field_0044;
    }
    local_2a4[3] = iVar3 + param_2;
    local_23c = 0xc006;
    (**(code **)(**(int **)&pOVar2->field_0xc + 8))(4,&local_8,0,local_42c,0);
    g_currentExceptionFrame = local_54.previous;
    return local_8;
  }
  g_currentExceptionFrame = local_54.previous;
  iVar10 = ReportDebugMessage(s_E____titans_Andrey_optpanel_cpp_007c70a0,0xa0,0,iVar3,&DAT_007a4ccc,
                              s_OptPanelTy__CreateSlider_007c716c);
  if (iVar10 != 0) {
    pcVar1 = (code *)swi(3);
    uVar8 = (*pcVar1)();
    return uVar8;
  }
  RaiseInternalException(iVar3,0,s_E____titans_Andrey_optpanel_cpp_007c70a0,0xa0);
  return 0xffffffff;
}

