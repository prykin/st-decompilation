
void __thiscall FUN_004f1c80(void *this,uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  
  uVar2 = param_2;
  uVar1 = param_1;
  iVar3 = thunk_FUN_004f19d0((char)param_1,(Global_sub_004F19D0_param_2Enum)param_2,&param_1,
                             &param_2);
  if (iVar3 != 0) {
    iVar3 = (uVar2 & 0xff) + (uVar1 & 0xff) * 6;
    pbVar4 = FUN_0070b650(*(short **)((int)this + iVar3 * 4 + 0xd0b),
                          (uint)*(byte *)(iVar3 + 0xd3b + (int)this));
    DibPut(*(undefined4 **)((int)this + (0x6a - (uVar1 & 0xff)) * 4),param_1,param_2,'\x06',pbVar4);
  }
  return;
}

