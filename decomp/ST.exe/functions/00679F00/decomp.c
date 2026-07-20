
int __thiscall
FUN_00679f00(void *this,uint param_1,AnonShape_0068FD00_A5257008 *param_2,int param_3)

{
  AiTactClassTy *this_00;
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 0x695);
  if (((iVar2 != 0) && (-1 < (int)param_1)) && ((int)param_1 < (int)*(uint *)(iVar2 + 0xc))) {
    if (param_1 < *(uint *)(iVar2 + 0xc)) {
      puVar1 = (undefined4 *)(*(int *)(iVar2 + 8) * param_1 + *(int *)(iVar2 + 0x1c));
    }
    else {
      puVar1 = (undefined4 *)0x0;
    }
    if (((puVar1[1] != 0) && (this_00 = (AiTactClassTy *)*puVar1, this_00 != (AiTactClassTy *)0x0))
       && (param_2 != (AnonShape_0068FD00_A5257008 *)0x0)) {
      if (param_3 < 0) {
        iVar2 = AiTactClassTy::GetAiMess(this_00,param_2);
        return iVar2;
      }
      iVar2 = thunk_FUN_0068fc70(this_00,(int)param_2,(short)param_3);
      return iVar2;
    }
  }
  return -0x34;
}

