
uint __thiscall thunk_FUN_004a7af0(void *this,int param_1,uint param_2,uint param_3)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  undefined4 uStack_2c;
  int iStack_26;
  int iStack_22;
  int iStack_1e;
  int iStack_1a;
  short sStack_14;
  short sStack_12;
  short sStack_10;
  int iStack_e;
  int iStack_a;
  
  if (*(int *)((int)this + 0x22a) == 0) {
    return 1;
  }
  FUN_006acc70(*(int *)((int)this + 0x22a),*(uint *)((int)this + 0x232),(undefined4 *)&sStack_14);
  if (param_1 == 1) {
    iStack_1e = thunk_FUN_0040bc90(this,param_2 & 0xffff,(short *)(int)sStack_14,
                                   (short *)(int)sStack_12,(short *)(int)sStack_10,'\0');
    if (*(int *)((int)this + 0x242) < iStack_1e) {
      if ((1 < *(ushort *)((int)this + 0x27)) &&
         (((*(int *)((int)this + 0x236) == 1 && (iStack_1e <= iStack_a / 2)) ||
          ((*(int *)((int)this + 0x236) == 0 && (iStack_1e <= iStack_e / 2)))))) {
        FUN_006acc70(*(int *)((int)this + 0x22e),param_3,&uStack_2c);
        if (iStack_1a != 0) {
          if (iStack_1a == 1) {
            if (iStack_1e < iStack_26) {
              iStack_1a = 1;
              iStack_26 = iStack_1e;
              FUN_006ae140(*(uint **)((int)this + 0x22e),param_3,&uStack_2c);
              return 0;
            }
            iStack_1a = 2;
            iStack_22 = iStack_1e;
            FUN_006ae140(*(uint **)((int)this + 0x22e),param_3,&uStack_2c);
            return 0;
          }
          if (iStack_1a != 2) {
            iVar2 = FUN_006ad4d0(s_E____titans_wlad_to_grpb_cpp_007abe3c,0x164b,0,0,&DAT_007a4ccc);
            if (iVar2 == 0) {
              return 0;
            }
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return uVar3;
          }
          if (iStack_22 <= iStack_1e) {
            if (*(int *)((int)this + 0x23e) == 0) {
              *(undefined4 *)((int)this + 0x23e) = 1;
            }
            iStack_1a = 3;
            uStack_2c = 1;
            FUN_006ae140(*(uint **)((int)this + 0x22e),param_3,&uStack_2c);
            iVar2 = thunk_FUN_004a7e30(this,1);
            return (uint)(iVar2 != 0);
          }
        }
        iStack_1a = 1;
        iStack_26 = iStack_1e;
        FUN_006ae140(*(uint **)((int)this + 0x22e),param_3,&uStack_2c);
      }
      return 0;
    }
    if (*(int *)((int)this + 0x23e) == 0) {
      *(undefined4 *)((int)this + 0x23e) = 1;
    }
    FUN_006acc70(*(int *)((int)this + 0x22e),param_3,&uStack_2c);
    puVar4 = *(uint **)((int)this + 0x22e);
  }
  else {
    iVar2 = thunk_FUN_00423e70(this,param_2);
    if ((int)*(short *)(iVar2 + 0x47) != *(int *)(iVar2 + 199)) {
      return 0;
    }
    if ((int)*(short *)(iVar2 + 0x49) != *(int *)(iVar2 + 0xcb)) {
      return 0;
    }
    if ((int)*(short *)(iVar2 + 0x4b) != *(int *)(iVar2 + 0xcf)) {
      return 0;
    }
    if (*(int *)((int)this + 0x23e) == 0) {
      *(undefined4 *)((int)this + 0x23e) = 1;
    }
    FUN_006acc70(*(int *)((int)this + 0x22e),param_3,&uStack_2c);
    puVar4 = *(uint **)((int)this + 0x22e);
  }
  uStack_2c = 1;
  FUN_006ae140(puVar4,param_3,&uStack_2c);
  iVar2 = thunk_FUN_004a7e30(this,1);
  return (uint)(iVar2 != 0);
}

