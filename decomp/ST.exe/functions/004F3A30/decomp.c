
void __thiscall
FUN_004f3a30(void *this,byte param_1,int param_2,byte param_3,char *param_4,UINT param_5,
            undefined *param_6)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  void *pvVar4;
  int iVar5;
  undefined4 uVar6;
  uint *puVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 local_5c;
  undefined4 local_58 [16];
  int *local_18;
  int local_14;
  void *local_10;
  int local_c;
  ushort *local_8;
  
  uVar3 = (uint)param_1;
  local_18 = *(int **)(param_2 + 0x18);
  local_8 = (ushort *)0x0;
  local_14 = local_18[1];
  local_c = *local_18 - *(int *)((int)this + uVar3 * 4 + 0x3c);
  switch(uVar3) {
  case 1:
    iVar5 = *(int *)((int)this + 0x134);
    goto LAB_004f3aaa;
  default:
    if (*(int *)((int)this + 0x130) != 0) {
      local_14 = local_14 - *(int *)((int)this + uVar3 * 4 + 0x94);
      goto LAB_004f3ac3;
    }
    break;
  case 3:
    if (*(int *)((int)this + 0x134) != 0) {
      local_14 = local_14 - *(int *)((int)this + uVar3 * 4 + 0x94);
      goto LAB_004f3ac3;
    }
    break;
  case 5:
    if (*(int *)((int)this + 0x138) != 0) {
      local_14 = local_14 - *(int *)((int)this + uVar3 * 4 + 0x94);
      goto LAB_004f3ac3;
    }
    break;
  case 7:
    iVar5 = *(int *)((int)this + 0x138);
LAB_004f3aaa:
    if (iVar5 != 0) {
      local_14 = local_14 - *(int *)((int)this + uVar3 * 4 + 0x94);
      goto LAB_004f3ac3;
    }
    local_14 = local_14 - *(int *)((int)this + 0xc0);
  }
  local_14 = local_14 - DAT_00806734;
LAB_004f3ac3:
  if (param_6 != (undefined *)0x0) {
    local_5c = DAT_00858df8;
    DAT_00858df8 = &local_5c;
    local_10 = this;
    iVar5 = __setjmp3(local_58,0,unaff_EDI,unaff_ESI);
    if (iVar5 == 0) {
      local_8 = FUN_006f1ce0(param_3,param_4,(int *)0x0,1);
      pvVar4 = local_10;
      iVar5 = local_14;
      uVar3 = (uint)param_1;
      thunk_FUN_00540760(*(undefined4 **)((int)local_10 + uVar3 * 4 + 0x180),local_c,local_14,
                         param_3,(byte *)local_8);
      FUN_006f20e0((uint *)&local_8);
      FUN_00710a90(*(int *)((int)pvVar4 + uVar3 * 4 + 0x180),0,local_c,iVar5,local_18[2],local_18[3]
                  );
      iVar10 = -1;
      iVar9 = -1;
      uVar6 = (*(code *)param_6)(param_2);
      iVar8 = -1;
      iVar5 = -2;
      puVar7 = (uint *)FUN_006b0140(param_5,DAT_00807618);
      FUN_00711b70(puVar7,iVar5,iVar8,uVar6,iVar9,iVar10);
      if ((param_1 < 0xb) && (uVar1 = *(uint *)((int)pvVar4 + uVar3 * 4 + 0x148), -1 < (int)uVar1))
      {
        FUN_006b3640(DAT_008075a8,uVar1,0xffffffff,*(uint *)((int)pvVar4 + uVar3 * 4 + 0x3c),
                     *(uint *)((int)pvVar4 + uVar3 * 4 + 0x94));
      }
      DAT_00858df8 = (undefined4 *)local_5c;
      return;
    }
    DAT_00858df8 = (undefined4 *)local_5c;
    iVar8 = FUN_006ad4d0(s_E____titans_Andrey_cp_sup_cpp_007c1a4c,0x1f8,0,iVar5,&DAT_007a4ccc);
    if (iVar8 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FUN_006a5e40(iVar5,0,0x7c1a4c,0x1f8);
  }
  return;
}

