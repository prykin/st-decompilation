
bool __cdecl
thunk_FUN_006a1100(int *param_1,int param_2,int param_3,int param_4,int param_5,ushort *param_6)

{
  uint3 uVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  byte abStack_c [2];
  byte bStack_a;
  byte bStack_8;
  
  iVar6 = param_3;
  if ((((-1 < param_2) && (param_2 < *param_1)) && (-1 < param_3)) &&
     (((param_3 < param_1[1] && (-1 < param_4)) && (param_4 < 6)))) {
    iVar4 = thunk_FUN_006a20e0(param_1,param_2,param_3,param_4,param_5);
    if (iVar4 == 0) {
      return false;
    }
    iVar4 = thunk_FUN_006a1370(param_1,param_2,param_3,param_4,(undefined4 *)abStack_c);
    if (param_5 == 0xff) {
      param_3._3_1_ = bStack_8;
    }
    else if (param_5 == 1) {
      param_3._3_1_ = bStack_a;
    }
    else {
      param_3._3_1_ = abStack_c[0];
    }
    uVar5 = thunk_FUN_006a0ef0(param_1,param_2,iVar6,param_4,param_5,param_6);
    sVar2 = (short)uVar5;
    if (sVar2 == -1) {
      return false;
    }
    if (param_3._3_1_ == 0) {
      return sVar2 == 0;
    }
    if ((short)iVar4 != param_4) {
      return false;
    }
    iVar6 = thunk_FUN_006a10c0(sVar2);
    uVar3 = (ushort)iVar6;
    if (uVar3 == 0xffff) {
      return false;
    }
    if (param_5 == 0xff) {
      if (uVar3 != (bStack_8 & 0xf)) {
        return false;
      }
    }
    else {
      uVar1 = CONCAT12(bStack_8,(ushort)bStack_a);
      if (param_5 != 1) {
        uVar1 = CONCAT12(bStack_a,(ushort)abStack_c[0]);
      }
      if ((int)(short)uVar3 != (uVar1 & 0xf)) {
        return false;
      }
    }
  }
  return true;
}

