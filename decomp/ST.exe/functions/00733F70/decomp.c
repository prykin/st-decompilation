
int __cdecl FUN_00733f70(int *param_1,byte *param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  if ((param_1 == (int *)0x0) &&
     (iVar2 = FUN_00730fa0(2,0x7a016c,0x38,0,(byte *)"str != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  if ((param_2 == (byte *)0x0) &&
     (iVar2 = FUN_00730fa0(2,0x7a016c,0x39,0,(byte *)"format != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  iVar2 = FUN_007372a0(param_1);
  iVar3 = FUN_0073b6f0(param_1,param_2,(undefined4 *)&stack0x0000000c);
  FUN_00737400(iVar2,param_1);
  return iVar3;
}

