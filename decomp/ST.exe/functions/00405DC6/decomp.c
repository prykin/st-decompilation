
void __thiscall thunk_FUN_0067a020(void *this,uint *param_1,int param_2)

{
  AiTactClassTy *this_00;
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *(int *)((int)this + 0x695);
  if (iVar3 != 0) {
    uVar1 = *(uint *)(iVar3 + 0xc);
    uVar4 = 0;
    if (0 < (int)uVar1) {
      do {
        if (((iVar3 != 0) && (-1 < (int)uVar4)) && ((int)uVar4 < (int)uVar1)) {
          if (uVar4 < uVar1) {
            puVar2 = (undefined4 *)(*(int *)(iVar3 + 8) * uVar4 + *(int *)(iVar3 + 0x1c));
          }
          else {
            puVar2 = (undefined4 *)0x0;
          }
          if (((puVar2[1] != 0) &&
              (this_00 = (AiTactClassTy *)*puVar2, this_00 != (AiTactClassTy *)0x0)) &&
             (param_1 != (uint *)0x0)) {
            if (param_2 < 0) {
              AiTactClassTy::GetAiMess(this_00,param_1);
            }
            else {
              thunk_FUN_0068fc70(this_00,param_1,(short)param_2);
            }
          }
        }
        uVar4 = uVar4 + 1;
        iVar3 = *(int *)((int)this + 0x695);
        uVar1 = *(uint *)(iVar3 + 0xc);
      } while ((int)uVar4 < (int)uVar1);
    }
  }
  return;
}

