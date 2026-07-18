
void __thiscall FUN_0053fee0(void *this,int param_1,undefined *param_2)

{
  code *pcVar1;
  void *pvVar2;
  int *piVar3;
  undefined4 uVar4;
  LPSTR pCVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int iVar6;
  int iVar7;
  undefined4 local_58;
  undefined4 local_54 [16];
  void *local_14;
  int local_10;
  int local_c;
  ushort *local_8;
  
  iVar6 = *(int *)(param_1 + 0x14);
  local_8 = (ushort *)0x0;
  local_10 = *(int *)(iVar6 + 0xc) - *(int *)((int)this + 0x3c);
  if (*(int *)((int)this + 0x5c) == 0) {
    local_c = *(int *)(iVar6 + 0x10) - DAT_00806734;
  }
  else {
    local_c = *(int *)(iVar6 + 0x10) - *(int *)((int)this + 0x44);
  }
  if (param_2 != (undefined *)0x0) {
    local_58 = DAT_00858df8;
    DAT_00858df8 = &local_58;
    local_14 = this;
    piVar3 = (int *)__setjmp3(local_54,0,unaff_EDI,unaff_ESI);
    if (piVar3 == (int *)0x0) {
      iVar7 = 1;
      uVar4 = (*(code *)param_2)(param_1);
      iVar6 = 2;
      pCVar5 = thunk_FUN_00571240(s_BUT_MFTABS_007c2374,0);
      pCVar5 = FUN_006f2c00(pCVar5,iVar6,uVar4);
      local_8 = FUN_006f1ce0(1,pCVar5,piVar3,iVar7);
      iVar6 = local_c;
      pvVar2 = local_14;
      thunk_FUN_00540760(*(undefined4 **)((int)local_14 + 0x68),local_10,local_c,'\x01',
                         (byte *)local_8);
      FUN_006f20e0((uint *)&local_8);
      if (*(int *)(*(int *)(param_1 + 0x14) + 4) == 3) {
        iVar7 = 1;
        piVar3 = (int *)0x0;
        pCVar5 = thunk_FUN_00571240(s_BUT_MFFRAMES_007c2384,0);
        local_8 = FUN_006f1ce0(6,pCVar5,piVar3,iVar7);
        thunk_FUN_00540760(*(undefined4 **)((int)pvVar2 + 0x68),local_10,iVar6,'\x06',
                           (byte *)local_8);
        FUN_006f20e0((uint *)&local_8);
      }
      FUN_006b3640(DAT_008075a8,*(uint *)((int)pvVar2 + 0x60),0xffffffff,
                   *(uint *)((int)pvVar2 + 0x3c),*(uint *)((int)pvVar2 + 0x44));
      DAT_00858df8 = (undefined4 *)local_58;
      return;
    }
    DAT_00858df8 = (undefined4 *)local_58;
    iVar6 = FUN_006ad4d0(s_E____titans_Andrey_specpan_cpp_007c7870,0x270,0,(int)piVar3,&DAT_007a4ccc
                        );
    if (iVar6 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_006a5e40((int)piVar3,0,0x7c7870,0x270);
  }
  return;
}

