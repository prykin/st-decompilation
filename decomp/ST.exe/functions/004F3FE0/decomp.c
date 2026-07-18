
void __thiscall
FUN_004f3fe0(void *this,byte param_1,int param_2,byte param_3,char *param_4,char *param_5,
            undefined *param_6)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  void *pvVar4;
  int iVar5;
  undefined4 uVar6;
  LPSTR pCVar7;
  int iVar8;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_58;
  undefined4 local_54 [16];
  void *local_14;
  int local_10;
  int local_c;
  ushort *local_8;
  
  uVar3 = (uint)param_1;
  local_8 = (ushort *)0x0;
  local_c = (*(int **)(param_2 + 0x18))[1];
  local_10 = **(int **)(param_2 + 0x18) - *(int *)((int)this + uVar3 * 4 + 0x3c);
  switch(uVar3) {
  case 1:
    iVar5 = *(int *)((int)this + 0x134);
    goto LAB_004f4057;
  default:
    if (*(int *)((int)this + 0x130) != 0) {
      local_c = local_c - *(int *)((int)this + uVar3 * 4 + 0x94);
      goto LAB_004f4070;
    }
    break;
  case 3:
    if (*(int *)((int)this + 0x134) != 0) {
      local_c = local_c - *(int *)((int)this + uVar3 * 4 + 0x94);
      goto LAB_004f4070;
    }
    break;
  case 5:
    if (*(int *)((int)this + 0x138) != 0) {
      local_c = local_c - *(int *)((int)this + uVar3 * 4 + 0x94);
      goto LAB_004f4070;
    }
    break;
  case 7:
    iVar5 = *(int *)((int)this + 0x138);
LAB_004f4057:
    if (iVar5 != 0) {
      local_c = local_c - *(int *)((int)this + uVar3 * 4 + 0x94);
      goto LAB_004f4070;
    }
    local_c = local_c - *(int *)((int)this + 0xc0);
  }
  local_c = local_c - DAT_00806734;
LAB_004f4070:
  if (param_6 != (undefined *)0x0) {
    local_58 = DAT_00858df8;
    DAT_00858df8 = &local_58;
    local_14 = this;
    iVar5 = __setjmp3(local_54,0,unaff_EDI,unaff_ESI);
    if (iVar5 == 0) {
      uVar6 = (*(code *)param_6)(param_2);
      pCVar7 = FUN_006f2c00(param_4,1,uVar6);
      local_8 = FUN_006f1ce0(param_3,pCVar7,(int *)0x0,1);
      pvVar4 = local_14;
      uVar3 = (uint)param_1;
      thunk_FUN_00540760(*(undefined4 **)((int)local_14 + uVar3 * 4 + 0x180),local_10,local_c,
                         param_3,(byte *)local_8);
      FUN_006f20e0((uint *)&local_8);
      if (*(int *)(param_2 + 0x14) == 3) {
        local_8 = FUN_006f1ce0(6,param_5,(int *)0x0,1);
        thunk_FUN_00540760(*(undefined4 **)((int)pvVar4 + uVar3 * 4 + 0x180),local_10,local_c,'\x06'
                           ,(byte *)local_8);
        FUN_006f20e0((uint *)&local_8);
      }
      if ((param_1 < 0xb) && (uVar1 = *(uint *)((int)pvVar4 + uVar3 * 4 + 0x148), -1 < (int)uVar1))
      {
        FUN_006b3640(DAT_008075a8,uVar1,0xffffffff,*(uint *)((int)pvVar4 + uVar3 * 4 + 0x3c),
                     *(uint *)((int)pvVar4 + uVar3 * 4 + 0x94));
      }
      DAT_00858df8 = (undefined4 *)local_58;
      return;
    }
    DAT_00858df8 = (undefined4 *)local_58;
    iVar8 = FUN_006ad4d0(s_E____titans_Andrey_cp_sup_cpp_007c1a4c,0x235,0,iVar5,&DAT_007a4ccc);
    if (iVar8 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FUN_006a5e40(iVar5,0,0x7c1a4c,0x235);
  }
  return;
}

