
void __cdecl thunk_FUN_006a2d80(ushort param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ushort auStack_c [4];
  
  iVar2 = 0;
  if (0 < *param_2) {
    do {
      iVar3 = 0;
      if (0 < param_2[1]) {
        do {
          auStack_c[0] = 0;
          auStack_c[1] = 0;
          auStack_c[2] = 0;
          iVar1 = thunk_FUN_006a1370(param_2,iVar2,iVar3,0,(undefined4 *)auStack_c);
          if (auStack_c[2] == 0) {
            auStack_c[2] = 0x1100;
          }
          if ((param_1 & 0x4000) == 0) {
            auStack_c[0] = param_1;
          }
          else {
            auStack_c[1] = param_1;
          }
          thunk_FUN_006a1620(param_2,iVar2,iVar3,(int)(short)iVar1,0xff,auStack_c,(undefined *)0x0,0
                            );
          iVar3 = iVar3 + 1;
        } while (iVar3 < param_2[1]);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *param_2);
  }
  return;
}

