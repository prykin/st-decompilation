
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cp_sup.cpp
   CPanelTy::PaintTab */

void __thiscall
CPanelTy::PaintTab(CPanelTy *this,byte param_1,int param_2,byte param_3,char *param_4,char *param_5,
                  undefined *param_6)

{
  code *pcVar1;
  uint uVar2;
  CPanelTy *pCVar3;
  int iVar4;
  undefined4 uVar5;
  LPSTR pCVar6;
  int iVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_58;
  undefined4 local_54 [16];
  CPanelTy *local_14;
  int local_10;
  int local_c;
  ushort *local_8;
  
  uVar2 = (uint)param_1;
  local_8 = (ushort *)0x0;
  local_c = *(int *)(*(int *)(param_2 + 0x14) + 0x10);
  local_10 = *(int *)(*(int *)(param_2 + 0x14) + 0xc) - *(int *)(this + uVar2 * 4 + 0x3c);
  switch(uVar2) {
  case 1:
    iVar4 = *(int *)(this + 0x134);
    goto LAB_004f4318;
  default:
    if (*(int *)(this + 0x130) != 0) {
      local_c = local_c - *(int *)(this + uVar2 * 4 + 0x94);
      goto LAB_004f4331;
    }
    break;
  case 3:
    if (*(int *)(this + 0x134) != 0) {
      local_c = local_c - *(int *)(this + uVar2 * 4 + 0x94);
      goto LAB_004f4331;
    }
    break;
  case 5:
    if (*(int *)(this + 0x138) != 0) {
      local_c = local_c - *(int *)(this + uVar2 * 4 + 0x94);
      goto LAB_004f4331;
    }
    break;
  case 7:
    iVar4 = *(int *)(this + 0x138);
LAB_004f4318:
    if (iVar4 != 0) {
      local_c = local_c - *(int *)(this + uVar2 * 4 + 0x94);
      goto LAB_004f4331;
    }
    local_c = local_c - *(int *)(this + 0xc0);
  }
  local_c = local_c - DAT_00806734;
LAB_004f4331:
  if (param_6 != (undefined *)0x0) {
    local_58 = DAT_00858df8;
    DAT_00858df8 = &local_58;
    local_14 = this;
    iVar4 = __setjmp3(local_54,0,unaff_EDI,unaff_ESI);
    if (iVar4 == 0) {
      uVar5 = (*(code *)param_6)(param_2);
      pCVar6 = FUN_006f2c00(param_4,2,uVar5);
      local_8 = FUN_006f1ce0(param_3,pCVar6,(int *)0x0,1);
      pCVar3 = local_14;
      uVar2 = (uint)param_1;
      thunk_FUN_00540760(*(undefined4 **)(local_14 + uVar2 * 4 + 0x180),local_10,local_c,param_3,
                         (byte *)local_8);
      cMf32::RecMemFree(DAT_00806790,(uint *)&local_8);
      if ((*(int *)(*(int *)(param_2 + 0x14) + 4) == 3) && (param_5 != (char *)0x0)) {
        local_8 = FUN_006f1ce0(6,param_5,(int *)0x0,1);
        thunk_FUN_00540760(*(undefined4 **)(pCVar3 + uVar2 * 4 + 0x180),local_10,local_c,'\x06',
                           (byte *)local_8);
        cMf32::RecMemFree(DAT_00806790,(uint *)&local_8);
      }
      if ((param_1 < 0xb) && (-1 < (int)*(uint *)(pCVar3 + uVar2 * 4 + 0x148))) {
        FUN_006b3640(DAT_008075a8,*(uint *)(pCVar3 + uVar2 * 4 + 0x148),0xffffffff,
                     *(uint *)(pCVar3 + uVar2 * 4 + 0x3c),*(uint *)(pCVar3 + uVar2 * 4 + 0x94));
      }
      DAT_00858df8 = (undefined4 *)local_58;
      return;
    }
    DAT_00858df8 = (undefined4 *)local_58;
    iVar7 = FUN_006ad4d0(s_E____titans_Andrey_cp_sup_cpp_007c1a4c,0x256,0,iVar4,&DAT_007a4ccc);
    if (iVar7 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_006a5e40(iVar4,0,0x7c1a4c,0x256);
  }
  return;
}

