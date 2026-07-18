
int thunk_FUN_0064d270(uint param_1,short param_2,int param_3,int param_4,undefined4 param_5,
                      undefined4 param_6,uint param_7,char *param_8,undefined4 param_9,
                      undefined4 param_10,int param_11,int param_12)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined3 extraout_var;
  char *_Source;
  int iVar4;
  undefined4 unaff_ESI;
  uint uVar5;
  uint uVar6;
  void *unaff_EDI;
  uint *puVar7;
  int iVar8;
  undefined4 uStack_e8;
  undefined4 auStack_e4 [16];
  uint auStack_a4 [5];
  uint uStack_90;
  int iStack_8c;
  undefined2 uStack_88;
  undefined2 uStack_86;
  undefined2 uStack_84;
  undefined2 uStack_82;
  undefined2 uStack_80;
  undefined4 uStack_7e;
  int iStack_7a;
  int iStack_76;
  undefined4 uStack_72;
  char acStack_6e [15];
  undefined4 uStack_5f;
  undefined4 uStack_5b;
  int iStack_38;
  short asStack_34 [2];
  undefined4 uStack_30;
  int iStack_2c;
  short asStack_28 [2];
  int iStack_24;
  undefined4 uStack_20;
  short asStack_1c [2];
  uint uStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  
  iStack_14 = -1;
  uStack_e8 = DAT_00858df8;
  DAT_00858df8 = &uStack_e8;
  iVar3 = __setjmp3(auStack_e4,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 *)uStack_e8;
    iVar4 = FUN_006ad4d0(s_E____titans_ai_ai_event_cpp_007d2a34,0xcb,0,iVar3,&DAT_007a4ccc);
    if (iVar4 != 0) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
    FUN_006a5e40(iVar3,0,0x7d2a34,0xcc);
    return iVar3;
  }
  if ((param_2 < 1) || (0x28 < param_2)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  uVar5 = param_7;
  if ((bVar2) && (DAT_007fa174 != 0)) {
    if (((short)param_3 < 0) || (((short)param_4 < 0 || ((short)param_5 < 0)))) {
      uVar5 = param_1 & 0xffff;
      asStack_28[0] = 7;
      asStack_28[1] = 0;
      asStack_1c[0] = 7;
      asStack_1c[1] = 0;
      uStack_20 = CONCAT22((short)((uint)param_3 >> 0x10),
                           *(short *)((int)&DAT_008087eb + uVar5 * 0x51) + -3);
      uStack_30 = CONCAT22((short)(uVar5 * 9 >> 0x10),
                           *(short *)((int)&DAT_008087ef + uVar5 * 0x51) + -3);
      thunk_FUN_006756d0((short *)&uStack_20,(short *)&uStack_30,asStack_28,asStack_1c);
      *(int *)(iStack_38 + 0x88) = *(int *)(iStack_38 + 0x88) * 0x41c64e6d + 0x3039;
      uStack_18 = *(int *)(iStack_38 + 0x88) * 0x41c64e6d + 0x3039;
      *(uint *)(iStack_38 + 0x88) = uStack_18;
      iVar3 = thunk_FUN_00675b10((uStack_18 >> 0x10) % (uint)(int)asStack_28[0] +
                                 (int)(short)uStack_20,
                                 (*(uint *)(iStack_38 + 0x88) >> 0x10) % (uint)(int)asStack_1c[0] +
                                 (int)(short)uStack_30,1,(short *)&param_3,(short *)&param_4,
                                 (short *)&param_5,(int)param_2);
    }
    else {
      bVar2 = thunk_FUN_004961b0((short)param_3,(short)param_4,(short)param_5);
      if (CONCAT31(extraout_var,bVar2) == 0) {
        iStack_2c = param_3 + -1;
        iStack_24 = param_4 + -1;
        uStack_18 = 3;
        asStack_34[0] = 3;
        asStack_34[1] = 0;
        thunk_FUN_006756d0((short *)&iStack_2c,(short *)&iStack_24,(short *)&uStack_18,asStack_34);
        param_3 = iStack_2c + 1;
        param_4 = iStack_24 + 1;
      }
      iVar3 = thunk_FUN_00675b10(param_3,param_4,(short)param_5,(short *)&param_3,(short *)&param_4,
                                 (short *)&param_5,(int)param_2);
    }
    uVar5 = param_7;
    if (iVar3 != 0) {
      puVar7 = auStack_a4;
      for (iVar3 = 0x1a; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
      *(undefined1 *)puVar7 = 0;
      auStack_a4[3] = 0;
      auStack_a4[1] = param_1 & 0xffff;
      if (((int)param_7 < 0) || (uStack_90 = param_7, 7 < (int)param_7)) {
        uStack_90 = auStack_a4[1];
      }
      iStack_8c = (int)param_2;
      uStack_88 = (short)param_3;
      uStack_86 = (short)param_4;
      uStack_80 = (undefined2)param_6;
      uStack_84 = (short)param_5;
      uStack_82 = 0xffff;
      _Source = param_8;
      if (param_8 == (char *)0x0) {
        _Source = &DAT_008016a0;
      }
      _strncpy(acStack_6e,_Source,0xe);
      uStack_7e = param_9;
      uStack_72 = 1;
      uStack_5f = param_10;
      if (((param_2 == 8) || (param_2 == 0x14)) || (param_2 == 0x1a)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if (bVar2) {
        iStack_7a = (param_11 * 0x78) / 100;
      }
      else {
        iStack_7a = 0;
      }
      if (((param_2 == 8) || (param_2 == 0x14)) || (param_2 == 0x1a)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if (bVar2) {
        iStack_76 = (param_12 * 800) / 100;
      }
      else {
        iStack_76 = 0;
      }
      uStack_5b = 1;
      thunk_FUN_004455c0(auStack_a4);
      iStack_14 = 0;
    }
  }
  if ((param_2 < 0x32) || (0x73 < param_2)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((bVar2) && (DAT_007fa174 != 0)) {
    iStack_8 = (int)(short)param_3;
    iStack_c = (int)(short)param_4;
    iStack_10 = (int)(short)param_5;
    if (param_11 == 0) {
      iVar4 = 1;
      iVar8 = (int)param_2;
      uVar5 = param_1 & 0xffff;
      iVar3 = thunk_FUN_004ae0b0(iStack_8,iStack_c,iStack_10,iVar8,uVar5,(undefined4 *)0x0,
                                 (int *)0x0,(int *)0x0,1,(int *)0x0);
      if (iVar3 == 0) {
        iVar4 = thunk_FUN_004b1120(uVar5,iVar8,&iStack_8,&iStack_c,&iStack_10,0,0);
      }
      if (iVar4 == 0) {
        DAT_00858df8 = (undefined4 *)uStack_e8;
        return iStack_14;
      }
      if (((int)param_7 < 0) || (uVar6 = param_7, 7 < (int)param_7)) {
        uVar6 = uVar5;
      }
      thunk_FUN_004b1040(uVar5,iVar8,iStack_8,iStack_c,iStack_10,param_6,uVar6,param_8,param_9,
                         param_10);
    }
    else {
      uVar6 = param_1 & 0xffff;
      iVar3 = thunk_FUN_004b1120(uVar6,(int)param_2,&iStack_8,&iStack_c,&iStack_10,0,0);
      if (iVar3 != 0) {
        if (((int)uVar5 < 0) || (7 < (int)uVar5)) {
          uVar5 = uVar6;
        }
        thunk_FUN_004b0f20(uVar6,(int)param_2,iStack_8,iStack_c,iStack_10,param_6,uVar5,param_8,0,
                           param_9);
      }
    }
    iStack_14 = 0;
  }
  DAT_00858df8 = (undefined4 *)uStack_e8;
  return iStack_14;
}

