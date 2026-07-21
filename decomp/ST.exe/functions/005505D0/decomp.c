
void __thiscall FUN_005505d0(void *this,int param_1,int *param_2)

{
  char *pcVar1;
  DWORD DVar2;
  byte bVar3;
  uint uVar4;
  undefined4 *puVar5;
  CHAR local_10c [260];
  uint local_8;

  if (param_2 != (int *)0x0) {
    pcVar1 = (char *)thunk_FUN_0054eab0(this,*param_2,&local_8);
    if (pcVar1 == (char *)0x0) {
      FUN_00715360(g_int_00811764,param_1,'7',(char *)0x0,0,0,0xffffffff);
      thunk_FUN_005508f0(this,param_1);
    }
    else {
      FUN_00715360(g_int_00811764,param_1,'1',pcVar1,local_8,1,*(undefined4 *)pcVar1);
      if (*(byte *)((int)this + 0xbb) < 5) {
        DVar2 = FUN_006e51b0(0x807620);
        *(DWORD *)((int)this + (uint)*(byte *)((int)this + 0xbb) * 4 + 0xa7) = DVar2;
        *(char *)((int)this + 0xbb) = *(char *)((int)this + 0xbb) + '\x01';
      }
      else {
        *(int *)((int)this + 0xa7) = *(int *)((int)this + 0xab);
        *(undefined4 *)((int)this + 0xab) = *(undefined4 *)((int)this + 0xaf);
        *(undefined4 *)((int)this + 0xaf) = *(undefined4 *)((int)this + 0xb3);
        *(undefined4 *)((int)this + 0xb3) = *(undefined4 *)((int)this + 0xb7);
        DVar2 = FUN_006e51b0(0x807620);
        *(DWORD *)((int)this + 0xb7) = DVar2;
        if (DAT_0080735e == '\0') {
          return;
        }
        if ((DVar2 - *(int *)((int)this + 0xa7)) / 5 < 0x7d1) {
          if (g_popUp_008016D8 != (PopUpTy *)0x0) {
            uVar4 = 9;
            pcVar1 = LoadResourceString(17000,HINSTANCE_00807618);
            thunk_FUN_0052d320(g_popUp_008016D8,pcVar1,uVar4);
          }
          *(undefined1 *)((int)this + 0xbb) = 0;
        }
      }
      if (DAT_0080735e != '\0') {
        bVar3 = 0;
        param_2 = (int *)0x0;
        if (DAT_00808aaf != 0) {
          do {
            puVar5 = &DAT_00808ab0 + (int)param_2 * 0x27;
            if (((&DAT_00808af0)[(int)param_2 * 0x27] == param_1) &&
               ((&DAT_00808af6)[(int)param_2 * 0x9c] != '\0')) {
              pcVar1 = LoadResourceString(0x426d,HINSTANCE_00807618);
              wsprintfA(local_10c,s__s__s_007c411c,pcVar1,puVar5);
              if (g_popUp_008016D8 != (PopUpTy *)0x0) {
                thunk_FUN_0052d320(g_popUp_008016D8,local_10c,8);
              }
            }
            bVar3 = bVar3 + 1;
            param_2 = (int *)(uint)bVar3;
          } while (bVar3 < DAT_00808aaf);
          return;
        }
      }
    }
  }
  return;
}

