
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall thunk_FUN_0061f8b0(void *this,int param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int aiStack_14 [4];
  
  aiStack_14[3] = *(uint *)(DAT_00802a38 + 0xe4);
  if ((((DAT_0080874d == param_3) && (*(uint *)((int)this + 0xb5) <= (uint)aiStack_14[3])) &&
      (((param_1 + 1 < *(int *)(DAT_00807598 + 0x48) ||
        (((*(int *)(DAT_00807598 + 0x58) < param_1 + -1 ||
          (param_2 + 1 < *(int *)(DAT_00807598 + 0x44))) ||
         (*(int *)(DAT_00807598 + 0x54) < param_2 + -1)))) || (iVar1 = FUN_006ddbd0(), iVar1 == 0)))
      ) && (((uVar2 = thunk_FUN_0061fa40(this,aiStack_14[3],param_1,param_2), (int)uVar2 < 0 &&
             (uVar2 = thunk_FUN_0061fb70(this,aiStack_14[3],param_1,param_2,param_3),
             -1 < (int)uVar2)) || (uVar2 == 2)))) {
    if (DAT_0080874e == '\x01') {
      iVar1 = 0x3b;
    }
    else if (DAT_0080874e == '\x02') {
      iVar1 = 0x3c;
    }
    else {
      if (DAT_0080874e != '\x03') {
        return;
      }
      iVar1 = 0x3d;
    }
    aiStack_14[2] = 0;
    aiStack_14[0] = -1;
    aiStack_14[1] = 0xffffffff;
    thunk_FUN_00568dd0(&DAT_00807658,6,(char *)0x0,iVar1,aiStack_14,0);
    thunk_FUN_0052af50(1,(float)param_1 * _DAT_007904f8 + _DAT_007904f4,
                       (float)param_2 * _DAT_007904f8 + _DAT_007904f4);
    *(uint *)((int)this + 0xb5) = aiStack_14[3] + 0xfa;
  }
  return;
}

