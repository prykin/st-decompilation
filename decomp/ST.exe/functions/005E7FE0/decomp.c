
/* Recovered from embedded debug metadata:
   E:\__titans\Start\wait_obj.cpp
   WaitTy::ShowDescription */

void __thiscall WaitTy::ShowDescription(WaitTy *this)

{
  undefined1 *puVar1;
  code *pcVar2;
  undefined4 *puVar3;
  int iVar4;
  ushort *puVar5;
  uint *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  cMf32 *this_00;
  undefined4 unaff_ESI;
  WaitTy *this_01;
  void *unaff_EDI;
  byte *pbVar10;
  byte local_1a8 [260];
  InternalExceptionFrame local_a4;
  InternalExceptionFrame local_60;
  undefined1 local_1c;
  undefined4 local_1b;
  undefined4 *local_10;
  int local_c;
  WaitTy *local_8;
  
  local_c = 0;
  local_60.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_60;
  local_8 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_60.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_60.previous;
    iVar9 = ReportDebugMessage(s_E____titans_Start_wait_obj_cpp_007cdd5c,0x15e,0,iVar4,&DAT_007a4ccc
                               ,s_WaitTy__ShowDescription_007cddd8);
    if (iVar9 == 0) {
      RaiseInternalException(iVar4,0,s_E____titans_Start_wait_obj_cpp_007cdd5c,0x15e);
      return;
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  puVar5 = FUN_0070a5a0(DAT_00806780,1,s_MM_MAPB_007cc790,0,1);
  thunk_FUN_00540760((undefined4 *)DAT_0081176c->field_02F0,0,0,'\x01',(byte *)puVar5);
  iVar4 = DAT_0081176c->field_0544;
  FUN_006b4170(iVar4,0,0,0,*(int *)(iVar4 + 4),*(int *)(iVar4 + 8),0xff);
  if ((byte *)DAT_0081176c->field_0548 != (byte *)0x0) {
    FUN_006b5570((byte *)DAT_0081176c->field_0548);
  }
  puVar6 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,10,10);
  this_01 = local_8;
  DAT_0081176c->field_0548 = puVar6;
  if (*(int *)&local_8[0x43].field_0x20 == -1) {
    uVar7 = FUN_006b0140(0x252c,DAT_00807618);
    uVar8 = FUN_006b0140(0x252a,DAT_00807618);
    wsprintfA((LPSTR)&DAT_0080f33a,s__s___s__007c85fc,uVar8,uVar7);
    iVar4 = 0;
    puVar6 = &DAT_0080f33a;
  }
  else {
    if (((byte)local_8[0x43].field_0x24 < 2) || (3 < (byte)local_8[0x43].field_0x24))
    goto LAB_005e829d;
    wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c6ee4,&DAT_00807680,PTR_s_CUSTOM__0079c244);
    local_1c = this_01[0x43].field_0x24;
    local_1b = *(undefined4 *)&this_01[0x43].field_0x20;
    iVar4 = FUN_00725910((char *)&DAT_0080f33a,s___DKD_007cce44,0,&LAB_00404e49,&local_1c,0);
    if (iVar4 == -0x70) {
      local_a4.previous = g_currentExceptionFrame;
      g_currentExceptionFrame = &local_a4;
      iVar4 = Library::MSVCRT::__setjmp3(local_a4.jumpBuffer,0,unaff_EDI,unaff_ESI);
      if (iVar4 == 0) {
        local_10 = FUN_006f0ec0(0x345,&DAT_0080ed16,0,0,0);
      }
      this_01 = local_8;
      puVar3 = local_10;
      g_currentExceptionFrame = local_a4.previous;
      if (local_10 != (undefined4 *)0x0) {
        StartSystemTy::LoadMapData
                  (DAT_0081176c,(int)local_10,(local_8[0x43].field_0x24 != '\x02') + '\x04');
        local_c = 1;
        Library::MSVCRT::FUN_0072e730(&DAT_0080ed16,(byte *)0x0,(byte *)0x0,local_1a8,(byte *)0x0);
        pbVar10 = local_1a8;
        uVar7 = FUN_006b0140(0x252a,DAT_00807618);
        wsprintfA((LPSTR)&DAT_0080f33a,s__s___s__007c85fc,uVar7,pbVar10);
        AddStr(this_01,&DAT_0080f33a,0);
        cMf32::delete(this_00,puVar3);
      }
      goto LAB_005e829d;
    }
    uVar7 = FUN_006b0140(0x252b,DAT_00807618);
    uVar8 = FUN_006b0140(0x252a,DAT_00807618);
    wsprintfA((LPSTR)&DAT_0080f33a,s__s___s__007c85fc,uVar8,uVar7);
    AddStr(this_01,&DAT_0080f33a,0);
    iVar4 = 0;
    puVar6 = (uint *)FUN_006b0140(0x252d,DAT_00807618);
  }
  AddStr(this_01,puVar6,iVar4);
LAB_005e829d:
  DAT_008087be = *(undefined4 *)&this_01[0x43].field_0x20;
  if (local_c == 0) {
    *(undefined4 *)&this_01->field_0x2d = 0x28;
    *(undefined2 *)&this_01->field_0x31 = 1;
    puVar1 = &this_01->field_0x1d;
    *(undefined2 *)&this_01->field_0x33 = *(undefined2 *)(DAT_0081176c->field_0548 + 8);
    FUN_006e6080(this_01,2,DAT_0081176c->field_0389,(undefined4 *)puVar1);
    *(undefined4 *)&this_01->field_0x2d = 0x22;
    *(undefined2 *)&this_01->field_0x33 = 0;
    *(undefined2 *)&this_01->field_0x31 = 0;
    FUN_006e6080(this_01,2,DAT_0081176c->field_0389,(undefined4 *)puVar1);
    *(undefined4 *)&this_01->field_0x2d = 0x20;
    *(undefined4 *)&this_01->field_0x31 = 0;
    FUN_006e6080(this_01,2,DAT_0081176c->field_0389,(undefined4 *)puVar1);
  }
  if (-1 < (int)DAT_0081176c->field_02EC) {
    FUN_006b35d0(DAT_008075a8,DAT_0081176c->field_02EC);
  }
  if (-1 < (int)DAT_0081176c->field_0540) {
    FUN_006b35d0(DAT_008075a8,DAT_0081176c->field_0540);
  }
  g_currentExceptionFrame = local_60.previous;
  return;
}

