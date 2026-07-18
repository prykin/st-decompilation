
uint FUN_006c6be0(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  
  iVar1 = param_1;
  *(undefined1 *)(param_1 + 0x5e) = 0;
  *(undefined2 *)(param_1 + 0x5f) = 0;
  uVar2 = (**(code **)(param_1 + 0x42))(param_1,(int)&param_1 + 3,1);
  iVar3 = param_1;
  do {
    if (uVar2 != 1) {
      if (uVar2 == 0) {
        return 0xffffffff;
      }
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      return 0xfffffffb;
    }
    param_1._3_1_ = (char)((uint)iVar3 >> 0x18);
    param_1 = iVar3;
    if (param_1._3_1_ == '!') {
      uVar2 = FUN_006c6c80(iVar1);
      if (uVar2 != 0) {
        return uVar2;
      }
    }
    else {
      if (param_1._3_1_ == ',') {
        return 0;
      }
      bVar4 = param_1._3_1_ == ';';
      if (bVar4) {
        uVar2 = *(uint *)(iVar1 + 0x56);
        if ((uVar2 & 2) != 0) {
          iVar3 = *(int *)(iVar1 + 0x5a) + -1;
          *(uint *)(iVar1 + 0x56) = uVar2 | 1;
          *(int *)(iVar1 + 0x5a) = iVar3;
          if (iVar3 == 0) {
            *(uint *)(iVar1 + 0x56) = CONCAT31((int3)(uVar2 >> 8),(char)(uVar2 | 1)) | 8;
            return 0xffffffff;
          }
          if (iVar3 < 1) {
            *(undefined4 *)(iVar1 + 0x5a) = 0;
          }
        }
        return 0xffffffff;
      }
    }
    uVar2 = (**(code **)(iVar1 + 0x42))(iVar1,(int)&param_1 + 3,1);
    iVar3 = param_1;
  } while( true );
}

