
void __thiscall
FUN_0053dcc0(void *this,int param_1,byte param_2,char *param_3,char *param_4,undefined *param_5)

{
  int *piVar1;
  code *pcVar2;
  void *pvVar3;
  int iVar4;
  undefined4 uVar5;
  LPSTR pCVar6;
  int iVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_58;
  undefined4 local_54 [16];
  void *local_14;
  int local_10;
  int local_c;
  ushort *local_8;
  
  piVar1 = *(int **)(param_1 + 0x18);
  local_8 = (ushort *)0x0;
  local_10 = *piVar1 - *(int *)((int)this + 0x3c);
  if (*(int *)((int)this + 0x5c) == 0) {
    local_c = piVar1[1] + *(int *)((int)this + 0x48);
  }
  else {
    local_c = piVar1[1] - *(int *)((int)this + 0x44);
  }
  if (param_5 != (undefined *)0x0) {
    local_58 = DAT_00858df8;
    DAT_00858df8 = &local_58;
    local_14 = this;
    iVar4 = __setjmp3(local_54,0,unaff_EDI,unaff_ESI);
    if (iVar4 == 0) {
      uVar5 = (*(code *)param_5)(param_1);
      pCVar6 = FUN_006f2c00(param_3,1,uVar5);
      local_8 = FUN_006f1ce0(param_2,pCVar6,(int *)0x0,1);
      iVar4 = local_c;
      pvVar3 = local_14;
      thunk_FUN_00540760(*(undefined4 **)((int)local_14 + 0x68),local_10,local_c,param_2,
                         (byte *)local_8);
      FUN_006f20e0((uint *)&local_8);
      if (*(int *)(param_1 + 0x14) == 3) {
        local_8 = FUN_006f1ce0(6,param_4,(int *)0x0,1);
        thunk_FUN_00540760(*(undefined4 **)((int)pvVar3 + 0x68),local_10,iVar4,'\x06',
                           (byte *)local_8);
        FUN_006f20e0((uint *)&local_8);
      }
      FUN_006b3640(DAT_008075a8,*(uint *)((int)pvVar3 + 0x60),0xffffffff,
                   *(uint *)((int)pvVar3 + 0x3c),*(uint *)((int)pvVar3 + 0x44));
      DAT_00858df8 = (undefined4 *)local_58;
      return;
    }
    DAT_00858df8 = (undefined4 *)local_58;
    iVar7 = FUN_006ad4d0(s_E____titans_Andrey_specpan_cpp_007c7870,0x74,0,iVar4,&DAT_007a4ccc);
    if (iVar7 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FUN_006a5e40(iVar4,0,0x7c7870,0x74);
  }
  return;
}

