
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::RestoreBoatData */

void __thiscall STBoatC::RestoreBoatData(STBoatC *this,int param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  STBoatC *pSVar4;
  int iVar5;
  undefined4 unaff_ESI;
  undefined4 *puVar6;
  void *unaff_EDI;
  short *psVar7;
  undefined4 *puVar8;
  int *piVar9;
  InternalExceptionFrame local_54;
  int local_10;
  int local_c;
  STBoatC *local_8;
  
  local_10 = param_1;
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_8 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
  iVar5 = local_10;
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_54.previous;
    iVar5 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x4ed4,0,iVar2,&DAT_007a4ccc,
                               s_STBoatC__RestoreBoatData_007aba58);
    if (iVar5 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RaiseInternalException(iVar2,0,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x4ed5);
    return;
  }
  puVar6 = (undefined4 *)(local_10 + 0x5c);
  puVar8 = &local_8->field_06F3;
  for (iVar2 = 0x5a; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar8 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar8 = puVar8 + 1;
  }
  *(undefined2 *)puVar8 = *(undefined2 *)puVar6;
  *(undefined1 *)((int)puVar8 + 2) = *(undefined1 *)((int)puVar6 + 2);
  puVar6 = (undefined4 *)(local_10 + 0x1c7);
  puVar8 = (undefined4 *)&local_8->field_0x2c0;
  for (iVar2 = 0x65; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar8 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar8 = puVar8 + 1;
  }
  *(undefined1 *)puVar8 = *(undefined1 *)puVar6;
  local_8->field_0455 = *(undefined4 *)(local_10 + 0x35c);
  local_8->field_0459 = *(undefined4 *)(local_10 + 0x360);
  local_8->field_045D = *(undefined4 *)(local_10 + 0x364);
  local_8->field_0461 = *(undefined4 *)(local_10 + 0x368);
  local_8->field_0469 = *(undefined2 *)(local_10 + 0x36c);
  local_8->field_046F = *(undefined2 *)(local_10 + 0x36e);
  local_8->field_0471 = *(undefined4 *)(local_10 + 0x370);
  local_8->field_0475 = *(undefined2 *)(local_10 + 0x374);
  local_8->field_0477 = *(undefined2 *)(local_10 + 0x376);
  local_8->field_0479 = *(undefined2 *)(local_10 + 0x378);
  local_8->field_047F = *(undefined4 *)(local_10 + 0x382);
  local_8->field_0483 = *(undefined4 *)(local_10 + 0x386);
  *(undefined4 *)&local_8->field_0x487 = *(undefined4 *)(local_10 + 0x38a);
  local_8->field_048B = *(undefined4 *)(local_10 + 0x38e);
  local_8->field_048F = *(undefined4 *)(local_10 + 0x392);
  local_8->field_0493 = *(undefined4 *)(local_10 + 0x396);
  local_8->field_0497 = *(undefined4 *)(local_10 + 0x39a);
  puVar6 = (undefined4 *)(local_10 + 0x39e);
  puVar8 = (undefined4 *)&local_8->field_049B;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar8 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar8 = puVar8 + 1;
  }
  *(undefined2 *)puVar8 = *(undefined2 *)puVar6;
  puVar6 = (undefined4 *)(local_10 + 0x3e0);
  puVar8 = (undefined4 *)&local_8->field_0x4dd;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar8 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar8 = puVar8 + 1;
  }
  *(undefined2 *)puVar8 = *(undefined2 *)puVar6;
  *(undefined1 *)((int)puVar8 + 2) = *(undefined1 *)((int)puVar6 + 2);
  puVar6 = (undefined4 *)(local_10 + 0x413);
  puVar8 = (undefined4 *)&local_8->field_0510;
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar8 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar8 = puVar8 + 1;
  }
  puVar6 = (undefined4 *)(local_10 + 0x42f);
  puVar8 = (undefined4 *)&local_8->field_0x52c;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar8 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar8 = puVar8 + 1;
  }
  puVar6 = (undefined4 *)(local_10 + 0x457);
  psVar7 = &local_8->field_0554;
  for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)psVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    psVar7 = psVar7 + 2;
  }
  puVar6 = (undefined4 *)(local_10 + 0x48b);
  puVar8 = (undefined4 *)&local_8->field_0x588;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar8 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar8 = puVar8 + 1;
  }
  puVar6 = (undefined4 *)(local_10 + 0x4a3);
  puVar8 = (undefined4 *)&local_8->field_05A0;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar8 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar8 = puVar8 + 1;
  }
  *(undefined2 *)puVar8 = *(undefined2 *)puVar6;
  *(undefined4 *)&local_8->field_0x5ca = *(undefined4 *)(local_10 + 0x4cd);
  local_c = 9;
  *(undefined4 *)&local_8->field_0x5ce = *(undefined4 *)(local_10 + 0x4d1);
  *(undefined4 *)&local_8->field_0x5d2 = *(undefined4 *)(local_10 + 0x4d5);
  local_8->field_05D6 = *(undefined4 *)(local_10 + 0x4d9);
  local_8->field_05DA = *(undefined2 *)(local_10 + 0x4dd);
  local_8->field_05DC = *(undefined4 *)(local_10 + 0x4df);
  local_8->field_05E0 = *(undefined4 *)(local_10 + 0x4e3);
  local_8->field_05E4 = *(undefined4 *)(local_10 + 0x4e7);
  local_8->field_05E8 = *(undefined4 *)(local_10 + 0x4eb);
  local_8->field_05EC = *(undefined4 *)(local_10 + 0x4ef);
  *(undefined4 *)&local_8->field_0x5f0 = *(undefined4 *)(local_10 + 0x4f3);
  *(undefined4 *)&local_8->field_0x5f4 = *(undefined4 *)(local_10 + 0x4f7);
  local_8->field_05F8 = *(undefined4 *)(local_10 + 0x4fb);
  puVar6 = (undefined4 *)(local_10 + 0x4ff);
  puVar8 = (undefined4 *)&local_8->field_0x5fc;
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar8 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar8 = puVar8 + 1;
  }
  *(undefined1 *)puVar8 = *(undefined1 *)puVar6;
  puVar6 = (undefined4 *)(local_10 + 0x51c);
  puVar8 = (undefined4 *)&local_8->field_0x619;
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar8 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar8 = puVar8 + 1;
  }
  puVar6 = (undefined4 *)(local_10 + 0x538);
  puVar8 = &local_8->field_0635;
  for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar8 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar8 = puVar8 + 1;
  }
  *(undefined2 *)puVar8 = *(undefined2 *)puVar6;
  puVar6 = (undefined4 *)(local_10 + 0x56e);
  puVar8 = (undefined4 *)&local_8->field_0x66b;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar8 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar8 = puVar8 + 1;
  }
  puVar6 = (undefined4 *)(local_10 + 0x58e);
  puVar8 = (undefined4 *)&local_8->field_068B;
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar8 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar8 = puVar8 + 1;
  }
  *(undefined2 *)puVar8 = *(undefined2 *)puVar6;
  puVar6 = (undefined4 *)(local_10 + 0x5ac);
  puVar8 = (undefined4 *)&local_8->field_06A9;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar8 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar8 = puVar8 + 1;
  }
  *(undefined2 *)puVar8 = *(undefined2 *)puVar6;
  puVar6 = (undefined4 *)(local_10 + 0x5ce);
  puVar8 = (undefined4 *)&local_8->field_0x6cb;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar8 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar8 = puVar8 + 1;
  }
  puVar6 = &local_8->field_0282;
  local_8->field_06EB = *(undefined4 *)(local_10 + 0x5ee);
  local_8->field_06EF = *(undefined4 *)(local_10 + 0x5f2);
  piVar9 = (int *)(local_10 + 0x14);
  pSVar4 = local_8;
  do {
    if (*piVar9 == -1) {
      *puVar6 = 0;
    }
    else {
      uVar3 = FUN_006b0060((uint *)0x0,(uint *)(*piVar9 + iVar5));
      *puVar6 = uVar3;
      pSVar4 = local_8;
    }
    piVar9 = piVar9 + 2;
    puVar6 = puVar6 + 1;
    local_c = local_c + -1;
  } while (local_c != 0);
  if (*(int *)(iVar5 + 0x37a) != -1) {
    uVar3 = FUN_006b0060((uint *)0x0,(uint *)(*(int *)(iVar5 + 0x37a) + iVar5));
    local_8->field_047B = uVar3;
    g_currentExceptionFrame = local_54.previous;
    return;
  }
  pSVar4->field_047B = 0;
  g_currentExceptionFrame = local_54.previous;
  return;
}

