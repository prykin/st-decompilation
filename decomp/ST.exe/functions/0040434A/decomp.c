
int thunk_FUN_0064dfa0(ushort param_1,short param_2,int param_3,int param_4,undefined4 param_5,
                      ushort param_6,char *param_7,undefined4 param_8,undefined4 param_9)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined3 extraout_var;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 uStack_6c;
  undefined4 auStack_68 [16];
  int iStack_28;
  uint uStack_24;
  short asStack_20 [4];
  int iStack_18;
  int iStack_14;
  undefined4 uStack_10;
  int iStack_c;
  int iStack_8;
  
  iStack_28 = -1;
  if (((short)param_6 < 0) || (7 < (short)param_6)) {
    param_6 = param_1;
  }
  uStack_24 = (uint)param_6;
  uStack_6c = DAT_00858df8;
  DAT_00858df8 = &uStack_6c;
  iVar3 = __setjmp3(auStack_68,0,unaff_EDI,unaff_ESI);
  if (iVar3 == 0) {
    if (DAT_007fa174 != 0) {
      if ((((param_2 == 0xa6) || (param_2 == 0xa7)) || (param_2 == 0xbd)) || (param_2 == 0xaf)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if (bVar2) {
        iStack_c = param_3;
        iStack_8 = param_4;
        uStack_10 = param_5;
        bVar2 = thunk_FUN_004961b0((short)param_3,(short)param_4,(short)param_5);
        if (CONCAT31(extraout_var,bVar2) == 0) {
          asStack_20[0] = 3;
          asStack_20[1] = 0;
          asStack_20[2] = 3;
          asStack_20[3] = 0;
          iStack_14 = param_3 + -1;
          iStack_18 = param_4 + -1;
          thunk_FUN_006756d0((short *)&iStack_14,(short *)&iStack_18,asStack_20,asStack_20 + 2);
          iStack_c = iStack_14 + 1;
          iStack_8 = iStack_18 + 1;
        }
        iVar3 = thunk_FUN_00675950(iStack_c,iStack_8,(short)uStack_10,(short *)&iStack_c,
                                   (short *)&iStack_8,(short *)&uStack_10,1);
        if (iVar3 != 0) {
          if (param_7 == (char *)0x0) {
            param_7 = &DAT_008016a0;
          }
          thunk_FUN_00627850((int)param_2,(uint)param_1,0,0,(int)(short)iStack_c,
                             (int)(short)iStack_8,(int)(short)uStack_10,uStack_24,param_7,param_9);
          DAT_00858df8 = (undefined4 *)uStack_6c;
          return 0;
        }
      }
    }
    DAT_00858df8 = (undefined4 *)uStack_6c;
    return iStack_28;
  }
  DAT_00858df8 = (undefined4 *)uStack_6c;
  iVar4 = FUN_006ad4d0(s_E____titans_ai_ai_event_cpp_007d2a34,0x169,0,iVar3,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  FUN_006a5e40(iVar3,0,0x7d2a34,0x16a);
  return iVar3;
}

