
void __thiscall
FUN_005389e0(void *this,int param_1,byte param_2,char *param_3,undefined *param_4,int param_5,
            int param_6)

{
  code *pcVar1;
  void *pvVar2;
  int *piVar3;
  undefined4 uVar4;
  LPSTR pCVar5;
  void *unaff_ESI;
  int iVar6;
  undefined4 uVar7;
  undefined4 local_54 [16];
  void *local_14;
  int local_10;
  int local_c;
  ushort *local_8;
  
  uVar7 = DAT_00858df8;
  piVar3 = *(int **)(param_1 + 0x18);
  local_8 = (ushort *)0x0;
  if (param_5 == 0) {
    local_10 = *piVar3;
  }
  else {
    local_10 = *piVar3;
    iVar6 = DAT_00806730;
    if (*(int *)((int)this + 0x5c) == 0) goto LAB_00538a14;
  }
  iVar6 = *(int *)((int)this + 0x3c);
LAB_00538a14:
  local_10 = local_10 - iVar6;
  if (param_6 == 0) {
    local_c = piVar3[1] - *(int *)((int)this + 0x44);
  }
  else if (*(int *)((int)this + 0x5c) == 0) {
    local_c = piVar3[1] - DAT_00806734;
  }
  else {
    local_c = piVar3[1] - *(int *)((int)this + 0x44);
  }
  if (param_4 != (undefined *)0x0) {
    DAT_00858df8 = &stack0xffffffa8;
    local_14 = this;
    piVar3 = (int *)__setjmp3(local_54,0,unaff_ESI,uVar7);
    if (piVar3 == (int *)0x0) {
      iVar6 = 1;
      uVar4 = (*(code *)param_4)(param_1);
      pCVar5 = FUN_006f2c00(param_3,1,uVar4);
      local_8 = FUN_006f1ce0(param_2,pCVar5,piVar3,iVar6);
      pvVar2 = local_14;
      thunk_FUN_00540760(*(undefined4 **)((int)local_14 + 0x68),local_10,local_c,param_2,
                         (byte *)local_8);
      FUN_006f20e0((uint *)&local_8);
      FUN_006b3640(DAT_008075a8,*(uint *)((int)pvVar2 + 0x60),0xffffffff,
                   *(uint *)((int)pvVar2 + 0x3c),*(uint *)((int)pvVar2 + 0x44));
      DAT_00858df8 = (undefined1 *)uVar7;
      return;
    }
    DAT_00858df8 = (undefined1 *)uVar7;
    iVar6 = FUN_006ad4d0(s_E____titans_Andrey_panel_cpp_007c7390,0xb2,0,(int)piVar3,&DAT_007a4ccc);
    if (iVar6 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_006a5e40((int)piVar3,0,0x7c7390,0xb2);
  }
  return;
}

