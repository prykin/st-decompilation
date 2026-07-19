
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::AddObjsToGroup */

undefined4 __thiscall
STAllPlayersC::AddObjsToGroup
          (STAllPlayersC *this,int param_1,ushort param_2,int param_3,undefined2 *param_4)

{
  code *pcVar1;
  uint *puVar2;
  bool bVar3;
  undefined3 extraout_var;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 unaff_ESI;
  uint uVar7;
  uint uVar8;
  void *unaff_EDI;
  InternalExceptionFrame local_90;
  undefined1 local_4c [4];
  int local_48;
  undefined4 local_40;
  uint local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  uint local_24;
  int local_20;
  undefined1 local_1c [4];
  uint local_18;
  uint *local_14;
  STGroupC *local_10;
  STGroupC *local_c;
  undefined1 local_5;
  
  iVar4 = *(int *)(param_3 + 0xc);
  uVar7 = 0;
  local_20 = 0;
  local_14 = *(uint **)((int)&DAT_007f4e24 + (char)param_1 * 0xa62 + 1);
  if (0 < iVar4) {
    do {
      FUN_006acc70(param_3,uVar7,&local_18);
      bVar3 = thunk_FUN_0042b5b0(param_1,local_18);
      if (CONCAT31(extraout_var,bVar3) == 0) {
        return 0xaffe0002;
      }
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < iVar4);
  }
  uVar8 = 0;
  uVar7 = local_14[3];
  local_24 = uVar7;
  if (0 < (int)uVar7) {
    do {
      FUN_006acc70((int)local_14,uVar8,&local_c);
      if (local_c != (STGroupC *)0x0) {
        iVar4 = thunk_FUN_00423d80(local_c,param_3);
        if (iVar4 == 1) {
          local_5 = 0;
          (**(code **)(local_c->field_0000 + 8))(0x65,&local_5);
        }
        if (uVar8 == param_2) {
          local_20 = 1;
        }
      }
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < (int)uVar7);
  }
  local_90.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_90;
  iVar4 = Library::MSVCRT::__setjmp3(local_90.jumpBuffer,0,unaff_EDI,unaff_ESI);
  puVar2 = local_14;
  if (iVar4 == 0) {
    uVar8 = local_24;
    uVar7 = local_24;
    if ((param_2 == 0xfffe) || (local_20 == 0)) {
      while (uVar7 = uVar7 - 1, -1 < (int)uVar7) {
        FUN_006acc70((int)puVar2,uVar7,&local_c);
        if (local_c == (STGroupC *)0x0) {
          uVar8 = uVar7;
        }
      }
      local_48 = (int)(char)param_1;
      local_34 = 0;
      local_30 = 0;
      local_2c = 0;
      local_40 = 1;
      local_38 = uVar8 & 0xffff;
      (**(code **)(*DAT_00802a38 + 8))(0x10ff,local_1c,&local_10,local_4c,0);
      Library::DKW::TBL::FUN_006ae140(puVar2,uVar8 & 0xffff,&local_10);
      STGroupC::AddObjs(local_10,param_3,0);
      local_5 = 2;
      (**(code **)(local_10->field_0000 + 8))(0x65,&local_5);
      if (param_4 != (undefined2 *)0x0) {
        *param_4 = (short)uVar8;
      }
    }
    else {
      FUN_006acc70((int)local_14,(uint)param_2,&local_c);
      STGroupC::AddObjs(local_c,param_3,1);
      local_5 = 1;
      (**(code **)(local_c->field_0000 + 8))(0x65,&local_5);
    }
    uVar7 = puVar2[3];
    uVar8 = 0;
    local_24 = uVar7;
    if (0 < (int)uVar7) {
      do {
        FUN_006acc70((int)puVar2,uVar8,&local_c);
        if (((local_c != (STGroupC *)0x0) && (local_c->field_0027 == 0)) &&
           (iVar4 = thunk_FUN_004233a0((int)local_c), iVar4 == 0)) {
          thunk_FUN_0054cf70(DAT_00802a38,*(uint *)&local_c->field_0x8);
          local_c = (STGroupC *)0x0;
          Library::DKW::TBL::FUN_006ae140(puVar2,uVar8,&local_c);
        }
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < (int)uVar7);
    }
    g_currentExceptionFrame = local_90.previous;
    return 0;
  }
  g_currentExceptionFrame = local_90.previous;
  iVar5 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x1d8,0,iVar4,&DAT_007a4ccc,
                             s_STAllPlayersC__AddObjsToGroup_007a60d0);
  if (iVar5 != 0) {
    pcVar1 = (code *)swi(3);
    uVar6 = (*pcVar1)();
    return uVar6;
  }
  RaiseInternalException(iVar4,0,s_E____titans_wlad_to_allpl_cpp_007a6004,0x1d9);
  return 0xffffffff;
}

