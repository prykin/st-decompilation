
int thunk_FUN_0064db00(short param_1,short param_2,int param_3,int param_4,undefined4 param_5,
                      char *param_6,char *param_7,undefined4 param_8)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined3 extraout_var;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 uStack_68;
  undefined4 auStack_64 [16];
  int iStack_24;
  short asStack_20 [4];
  int iStack_18;
  int iStack_14;
  undefined4 uStack_10;
  int iStack_c;
  int iStack_8;
  
  iStack_24 = -1;
  uStack_68 = DAT_00858df8;
  DAT_00858df8 = &uStack_68;
  iVar3 = __setjmp3(auStack_64,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 *)uStack_68;
    iVar4 = FUN_006ad4d0(s_E____titans_ai_ai_event_cpp_007d2a34,0x117,0,iVar3,&DAT_007a4ccc);
    if (iVar4 != 0) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
    FUN_006a5e40(iVar3,0,0x7d2a34,0x118);
    return iVar3;
  }
  if (DAT_007fa174 != 0) {
    if ((param_1 < 1) && (0x15 < param_1)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (((param_2 == 1 || (param_2 == 2)) || (param_2 == 3)))) {
      iStack_c = param_3;
      iStack_8 = param_4;
      uStack_10 = param_5;
      bVar2 = thunk_FUN_004961b0((short)param_3,(short)param_4,(short)param_5);
      if (CONCAT31(extraout_var,bVar2) == 0) {
        iStack_14 = param_3 + -1;
        iStack_18 = param_4 + -1;
        asStack_20[0] = 3;
        asStack_20[1] = 0;
        asStack_20[2] = 3;
        asStack_20[3] = 0;
        thunk_FUN_006756d0((short *)&iStack_14,(short *)&iStack_18,asStack_20,asStack_20 + 2);
        iStack_c = iStack_14 + 1;
        iStack_8 = iStack_18 + 1;
      }
      iVar3 = thunk_FUN_00675b10(iStack_c,iStack_8,(short)uStack_10,(short *)&iStack_c,
                                 (short *)&iStack_8,(short *)&uStack_10,0xfd);
      if (iVar3 != 0) {
        if (param_7 == (char *)0x0) {
          param_7 = &DAT_008016a0;
        }
        if (param_6 == (char *)0x0) {
          param_6 = &DAT_008016a0;
        }
        thunk_FUN_005f0ec0((int)param_1,(int)param_2,(int)(short)iStack_c,(int)(short)iStack_8,
                           (int)(short)uStack_10,param_6,param_7,0xffffffff,param_8);
        DAT_00858df8 = (undefined4 *)uStack_68;
        return 0;
      }
    }
  }
  DAT_00858df8 = (undefined4 *)uStack_68;
  return iStack_24;
}

