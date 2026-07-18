
int __cdecl thunk_FUN_006839d0(int param_1,int *param_2,undefined2 param_3,int param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 uStack_18;
  undefined2 uStack_17;
  undefined2 uStack_15;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  
  iVar3 = param_4;
  iVar5 = 0;
  iStack_8 = 0;
  iStack_c = 0;
  if (((param_4 == 0) || (param_2 == (int *)0x0)) || (param_1 == 0)) {
    FUN_006a5e40(-0x34,DAT_007ed77c,0x7d5604,0x3e5);
  }
  iVar2 = param_2[1];
  param_4 = 0;
  if (0 < (int)(&DAT_00813bc4)[DAT_008488b0 * 0xac5]) {
    do {
      cVar1 = (&DAT_00813bc8)[param_4 + DAT_008488b0 * 0x2b14];
      switch(cVar1) {
      case '\x01':
        thunk_FUN_006838b0(param_2,cVar1,(byte *)(&DAT_00811aec)[DAT_008488b0 * 0xac5 + iStack_c],
                           iVar3);
        iStack_c = iStack_c + 1;
        break;
      case '\x02':
        thunk_FUN_006838b0(param_2,cVar1,(byte *)(&DAT_00811c80 + DAT_008488b0 * 0xac5 + iVar5),
                           iVar3);
        iVar5 = iVar5 + 1;
        break;
      case '\x03':
        thunk_FUN_006838b0(param_2,cVar1,&DAT_00812c24 + (DAT_008488b0 * 0xac5 + iStack_8) * 4,iVar3
                          );
        iStack_8 = iStack_8 + 1;
        break;
      case '\x04':
        iVar6 = iVar3;
        iVar4 = thunk_FUN_0067fca0((&DAT_00811c80)[DAT_008488b0 * 0xac5 + iVar5]);
        thunk_FUN_00683780(param_2,iVar4,iVar6);
        iVar5 = iVar5 + 1;
        break;
      default:
        FUN_006a5e40(-0x34,DAT_007ed77c,0x7d5604,0x3f6);
      }
      param_4 = param_4 + 1;
    } while (param_4 < (int)(&DAT_00813bc4)[DAT_008488b0 * 0xac5]);
  }
  uStack_17 = param_3;
  uStack_18 = 0xb;
  uStack_15 = *(undefined2 *)(&DAT_00813bc4 + DAT_008488b0 * 0xac5);
  thunk_FUN_0064a830(param_2,(undefined4 *)&uStack_18);
  iStack_10 = iVar2;
  FUN_006ae1c0(*(uint **)(param_1 + 0xf),&iStack_10);
  return iVar2;
}

