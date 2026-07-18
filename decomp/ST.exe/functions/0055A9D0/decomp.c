
uint __thiscall
FUN_0055a9d0(void *this,int param_1,int param_2,undefined *param_3,uint param_4,undefined *param_5,
            undefined4 param_6)

{
  uint *puVar1;
  code *pcVar2;
  void *this_00;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int *piVar6;
  undefined4 local_6c;
  undefined4 local_68 [16];
  int local_28 [2];
  undefined *local_20;
  undefined *local_1c;
  uint local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  if ((*(int *)((int)this + 0x114) != 0) && (-1 < (int)param_5)) {
    local_6c = DAT_00858df8;
    DAT_00858df8 = &local_6c;
    local_c = this;
    iVar3 = __setjmp3(local_68,0,unaff_EDI,unaff_ESI);
    this_00 = local_c;
    if (iVar3 == 0) {
      puVar1 = *(uint **)((int)local_c + 0xf4);
      if (puVar1 != (uint *)0x0) {
        piVar6 = local_28;
        for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
          *piVar6 = 0;
          piVar6 = piVar6 + 1;
        }
        local_28[1] = param_2;
        local_28[0] = param_1;
        local_18 = param_4;
        local_20 = param_3;
        local_10 = param_6;
        local_1c = param_5;
        local_14 = *(undefined4 *)((int)this_00 + 0x108);
        local_8 = FUN_006ae1c0(puVar1,local_28);
        thunk_FUN_00558dc0(this_00,local_28[0],local_28[1],local_20,local_18,local_1c,-6,0xffffffff)
        ;
      }
      DAT_00858df8 = (undefined4 *)local_6c;
      return local_8;
    }
    DAT_00858df8 = (undefined4 *)local_6c;
    iVar4 = FUN_006ad4d0(s_E____titans_grig_visible_cpp_007c92cc,0x3f0,0,iVar3,&DAT_007a4ccc);
    if (iVar4 != 0) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return uVar5;
    }
    FUN_006a5e40(iVar3,0,0x7c92cc,0x3f1);
  }
  return 0xffffffff;
}

