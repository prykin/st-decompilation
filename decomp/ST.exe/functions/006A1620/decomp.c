
void __cdecl
FUN_006a1620(int *param_1,int param_2,int param_3,int param_4,int param_5,ushort *param_6,
            undefined *param_7,undefined4 param_8)

{
  ushort *puVar1;
  undefined4 *puVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;
  
  if (param_7 != (undefined *)0x0) {
    (*(code *)param_7)(param_2,param_3,param_4,param_8);
  }
  uVar3 = param_6[2];
  puVar1 = (ushort *)
           ((int)param_1 + ((param_1[1] * param_4 + param_3) * *param_1 + param_2) * 6 + 8);
  puVar1[2] = uVar3;
  if (param_5 == 0xff) {
    *puVar1 = *param_6;
  }
  else if (param_5 == 0) {
    *puVar1 = *param_6;
  }
  else {
    puVar1[1] = param_6[1];
  }
  uVar4 = *puVar1;
  if (((uVar4 & 0x2000) != 0) && ((uVar4 & 0x1000) == 0)) {
    uVar4 = (byte)((byte)uVar4 ^ (byte)puVar1[2] & 0xf) & 0xf ^ uVar4;
    *puVar1 = uVar4;
    if ((puVar1[2] & 0xf) == 0) {
      uVar5 = FUN_0072e6c0();
      bVar7 = ((char)((int)uVar5 % (int)DAT_007df9e8) + '\x01') * '\x10';
    }
    else {
      bVar7 = (byte)puVar1[2];
    }
    *puVar1 = (byte)(bVar7 ^ (byte)uVar4) & 0xf0 ^ uVar4;
  }
  iVar6 = param_4 - ((uVar3 & 0xf00) >> 8);
  while (param_4 = param_4 + -1, iVar6 < param_4) {
    if (param_7 != (undefined *)0x0) {
      (*(code *)param_7)(param_2,param_3,param_4,param_8);
    }
    puVar2 = (undefined4 *)
             ((int)param_1 + ((param_1[1] * param_4 + param_3) * *param_1 + param_2) * 6 + 8);
    *puVar2 = *(undefined4 *)param_6;
    *(ushort *)(puVar2 + 1) = param_6[2];
    *(ushort *)(puVar2 + 1) = *(ushort *)(puVar2 + 1) & 0xf0ff;
  }
  return;
}

