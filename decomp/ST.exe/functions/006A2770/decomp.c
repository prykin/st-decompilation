
undefined4 __cdecl
FUN_006a2770(int *param_1,int param_2,int param_3,int param_4,ushort *param_5,undefined *param_6,
            undefined4 param_7)

{
  int iVar1;
  ushort *puVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int *local_8;
  
  puVar2 = param_5;
  if (((((-1 < param_2) && (param_2 < *param_1)) && (-1 < param_3)) &&
      ((param_3 < param_1[1] && (-1 < param_4)))) && (param_4 < 6)) {
    local_8 = &DAT_007df86c;
    do {
      uVar4 = local_8[-1] + param_2;
      iVar3 = *local_8 + param_3;
      if ((((int)uVar4 < 0) || (*param_1 <= (int)uVar4)) || ((iVar3 < 0 || (param_1[1] <= iVar3))))
      {
        FUN_006a5e40(0x521,DAT_007ed77c,0x7dfa6c,0x2ff);
      }
      thunk_FUN_006a23a0(param_1,uVar4,iVar3,param_4,(short *)param_5,param_6,param_7);
      local_8 = local_8 + 2;
    } while ((int)local_8 < 0x7df88c);
    param_5 = (ushort *)&DAT_007df888;
    piVar5 = &DAT_007df86c;
    do {
      iVar3 = piVar5[-1];
      iVar1 = *piVar5;
      puVar2[2] = (byte)((byte)puVar2[2] ^ (byte)*param_5) & 0xf ^ puVar2[2];
      *puVar2 = (byte)((byte)*puVar2 ^ (byte)*param_5) & 0xf ^ *puVar2;
      thunk_FUN_006a1620(param_1,iVar3 + param_2,iVar1 + param_3,param_4,0xff,puVar2,param_6,param_7
                        );
      piVar5 = piVar5 + 2;
      param_5 = param_5 + 2;
    } while ((int)piVar5 < 0x7df88c);
    return 0;
  }
  return 1;
}

