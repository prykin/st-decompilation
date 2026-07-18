
char __thiscall
thunk_FUN_00698ca0(void *this,int param_1,int param_2,int param_3,int *param_4,int *param_5,
                  undefined4 *param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uStack_c;
  uint uStack_8;
  
  iVar1 = thunk_FUN_006a1370(*(int **)((int)this + 8),param_1,param_2,param_3,&uStack_c);
  *param_4 = -1;
  *param_5 = -1;
  *param_6 = 0;
  iVar2 = thunk_FUN_006a20e0(*(int **)((int)this + 8),param_1,param_2,param_3,0xff);
  if (iVar2 != 0) {
    uVar3 = uStack_8 >> 8 & 0xf;
    if (uVar3 != 0) {
      if ((uStack_8 & 0x1000) == 0) {
        *param_6 = 2;
      }
      else {
        uVar3 = uVar3 - 1;
        *param_6 = 1;
      }
      *param_5 = (int)(short)iVar1;
      iVar1 = (int)(short)iVar1 - uVar3;
      *param_4 = iVar1;
      if (param_3 == *param_5) {
        return '\x04';
      }
      return (param_3 != iVar1) + '\x01';
    }
  }
  return '\0';
}

