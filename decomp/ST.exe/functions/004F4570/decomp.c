
void __thiscall FUN_004f4570(void *this,char param_1,int param_2,int param_3)

{
  uint uVar1;
  short sVar2;
  byte *pbVar3;
  int local_8;
  
  sVar2 = -1;
  pbVar3 = (byte *)(param_2 + 0xf);
  local_8 = 6;
  do {
    if ((pbVar3[-6] != 0) &&
       ((sVar2 = sVar2 + 1, *pbVar3 != pbVar3[param_3 - param_2] ||
        (*(char *)(param_2 + 7) != *(char *)(param_3 + 7))))) {
      *(undefined4 *)((int)this + 0x28) = 0x54;
      if (*(char *)(param_2 + 7) == '\0') {
        uVar1 = 0;
      }
      else {
        uVar1 = (uint)*pbVar3;
      }
      *(uint *)((int)this + 0x2c) = uVar1;
      *(int *)((int)this + 0x30) = (int)sVar2;
      FUN_006e6080(this,2,*(undefined4 *)((int)this + (uint)(param_1 == '\0') * 4 + 0x2fe),
                   (undefined4 *)((int)this + 0x18));
    }
    pbVar3 = pbVar3 + 1;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  return;
}

