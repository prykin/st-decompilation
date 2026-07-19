
/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_event.cpp
   AiEventClassTy::__CreateObjPl */

int __thiscall
AiEventClassTy::__CreateObjPl
          (AiEventClassTy *this,uint param_1,short param_2,int param_3,int param_4,
          undefined4 param_5,undefined4 param_6,uint param_7,char *param_8,undefined4 param_9,
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
  InternalExceptionFrame local_e8;
  uint local_a4 [5];
  uint local_90;
  int local_8c;
  undefined2 local_88;
  undefined2 local_86;
  undefined2 local_84;
  undefined2 local_82;
  undefined2 local_80;
  undefined4 local_7e;
  int local_7a;
  int local_76;
  undefined4 local_72;
  char local_6e [15];
  undefined4 local_5f;
  undefined4 local_5b;
  AiEventClassTy *local_38;
  short local_34 [2];
  undefined4 local_30;
  int local_2c;
  short local_28 [2];
  int local_24;
  undefined4 local_20;
  short local_1c [2];
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_14 = -1;
  local_e8.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_e8;
  local_38 = this;
  iVar3 = __setjmp3(local_e8.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_e8.previous;
    iVar4 = ReportDebugMessage(s_E____titans_ai_ai_event_cpp_007d2a34,0xcb,0,iVar3,&DAT_007a4ccc,
                               s_AiEventClassTy____CreateObjPl_007d2a9c);
    if (iVar4 != 0) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
    RaiseInternalException(iVar3,0,s_E____titans_ai_ai_event_cpp_007d2a34,0xcc);
    return iVar3;
  }
  if ((param_2 < 1) || (0x28 < param_2)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  uVar5 = param_7;
  if ((bVar2) && (DAT_007fa174 != (STAllPlayersC *)0x0)) {
    if (((short)param_3 < 0) || (((short)param_4 < 0 || ((short)param_5 < 0)))) {
      uVar5 = param_1 & 0xffff;
      local_28[0] = 7;
      local_28[1] = 0;
      local_1c[0] = 7;
      local_1c[1] = 0;
      local_20 = CONCAT22((short)((uint)param_3 >> 0x10),
                          *(short *)((int)&DAT_008087eb + uVar5 * 0x51) + -3);
      local_30 = CONCAT22((short)(uVar5 * 9 >> 0x10),
                          *(short *)((int)&DAT_008087ef + uVar5 * 0x51) + -3);
      thunk_FUN_006756d0((short *)&local_20,(short *)&local_30,local_28,local_1c);
      *(int *)(local_38 + 0x88) = *(int *)(local_38 + 0x88) * 0x41c64e6d + 0x3039;
      local_18 = *(int *)(local_38 + 0x88) * 0x41c64e6d + 0x3039;
      *(uint *)(local_38 + 0x88) = local_18;
      iVar3 = thunk_FUN_00675b10((local_18 >> 0x10) % (uint)(int)local_28[0] + (int)(short)local_20,
                                 (*(uint *)(local_38 + 0x88) >> 0x10) % (uint)(int)local_1c[0] +
                                 (int)(short)local_30,1,(short *)&param_3,(short *)&param_4,
                                 (short *)&param_5,(int)param_2);
    }
    else {
      bVar2 = thunk_FUN_004961b0((short)param_3,(short)param_4,(short)param_5);
      if (CONCAT31(extraout_var,bVar2) == 0) {
        local_2c = param_3 + -1;
        local_24 = param_4 + -1;
        local_18 = 3;
        local_34[0] = 3;
        local_34[1] = 0;
        thunk_FUN_006756d0((short *)&local_2c,(short *)&local_24,(short *)&local_18,local_34);
        param_3 = local_2c + 1;
        param_4 = local_24 + 1;
      }
      iVar3 = thunk_FUN_00675b10(param_3,param_4,(short)param_5,(short *)&param_3,(short *)&param_4,
                                 (short *)&param_5,(int)param_2);
    }
    uVar5 = param_7;
    if (iVar3 != 0) {
      puVar7 = local_a4;
      for (iVar3 = 0x1a; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
      *(undefined1 *)puVar7 = 0;
      local_a4[3] = 0;
      local_a4[1] = param_1 & 0xffff;
      if (((int)param_7 < 0) || (local_90 = param_7, 7 < (int)param_7)) {
        local_90 = local_a4[1];
      }
      local_8c = (int)param_2;
      local_88 = (short)param_3;
      local_86 = (short)param_4;
      local_80 = (undefined2)param_6;
      local_84 = (short)param_5;
      local_82 = 0xffff;
      _Source = param_8;
      if (param_8 == (char *)0x0) {
        _Source = &DAT_008016a0;
      }
      _strncpy(local_6e,_Source,0xe);
      local_7e = param_9;
      local_72 = 1;
      local_5f = param_10;
      if (((param_2 == 8) || (param_2 == 0x14)) || (param_2 == 0x1a)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if (bVar2) {
        local_7a = (param_11 * 0x78) / 100;
      }
      else {
        local_7a = 0;
      }
      if (((param_2 == 8) || (param_2 == 0x14)) || (param_2 == 0x1a)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if (bVar2) {
        local_76 = (param_12 * 800) / 100;
      }
      else {
        local_76 = 0;
      }
      local_5b = 1;
      STAllPlayersC::CreateBoat(DAT_007fa174,local_a4);
      local_14 = 0;
    }
  }
  if ((param_2 < 0x32) || (0x73 < param_2)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((bVar2) && (DAT_007fa174 != (STAllPlayersC *)0x0)) {
    local_8 = (int)(short)param_3;
    local_c = (int)(short)param_4;
    local_10 = (int)(short)param_5;
    if (param_11 == 0) {
      iVar4 = 1;
      iVar8 = (int)param_2;
      uVar5 = param_1 & 0xffff;
      iVar3 = thunk_FUN_004ae0b0(local_8,local_c,local_10,iVar8,uVar5,(undefined4 *)0x0,(int *)0x0,
                                 (int *)0x0,1,(int *)0x0);
      if (iVar3 == 0) {
        iVar4 = thunk_FUN_004b1120(uVar5,iVar8,&local_8,&local_c,&local_10,0,0);
      }
      if (iVar4 == 0) {
        g_currentExceptionFrame = local_e8.previous;
        return local_14;
      }
      if (((int)param_7 < 0) || (uVar6 = param_7, 7 < (int)param_7)) {
        uVar6 = uVar5;
      }
      thunk_FUN_004b1040(uVar5,iVar8,local_8,local_c,local_10,param_6,uVar6,param_8,param_9,param_10
                        );
    }
    else {
      uVar6 = param_1 & 0xffff;
      iVar3 = thunk_FUN_004b1120(uVar6,(int)param_2,&local_8,&local_c,&local_10,0,0);
      if (iVar3 != 0) {
        if (((int)uVar5 < 0) || (7 < (int)uVar5)) {
          uVar5 = uVar6;
        }
        thunk_FUN_004b0f20(uVar6,(int)param_2,local_8,local_c,local_10,param_6,uVar5,param_8,0,
                           param_9);
      }
    }
    local_14 = 0;
  }
  g_currentExceptionFrame = local_e8.previous;
  return local_14;
}

