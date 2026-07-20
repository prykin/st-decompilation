
void __thiscall FUN_0063d100(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  AnonShape_004ADBA0_E7CEFF88 *pAVar4;
  undefined4 *puVar5;
  LPVOID local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if (this == (void *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5 = (undefined4 *)((int)this + 0x231);
  }
  puVar3 = param_1;
  for (iVar2 = 0x54; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  *(undefined2 *)puVar5 = *(undefined2 *)puVar3;
  *(undefined4 *)((int)this + 0x347) = 0;
  pAVar4 = (AnonShape_004ADBA0_E7CEFF88 *)((int)param_1 + 0x152);
  if (*(int *)((int)this + 0x336) != 0) {
    uVar1 = FUN_006b0060((uint *)0x0,(uint *)((int)param_1 + 0x156));
    *(undefined4 *)((int)this + 0x336) = uVar1;
    pAVar4 = (AnonShape_004ADBA0_E7CEFF88 *)((int)param_1 + 0x156 + *(int *)pAVar4);
  }
  local_20 = (LPVOID)Library::DKW::LIB::FUN_006aac70(0x44);
  iVar2 = 0;
  do {
    *(undefined4 *)(iVar2 + (int)local_20) = DAT_00806774;
    iVar2 = iVar2 + 4;
  } while (iVar2 < 0x44);
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0x10;
  local_8 = 0;
  STT3DSprC::RestoreSpr((STT3DSprC *)((int)this + 0x1d5),(int *)&local_20,pAVar4);
  thunk_FUN_00416240(this,*(undefined2 *)((int)this + 0x266),*(undefined2 *)((int)this + 0x26a),
                     *(undefined2 *)((int)this + 0x26e));
  FUN_006ab060(&local_20);
  if (-1 < *(int *)((int)this + 0x33a)) {
    *(undefined4 *)((int)this + 0x33a) = 0xffffffff;
    *(undefined4 *)((int)this + 0x353) = 0xffffffff;
    iVar2 = STTmMineC::LoadImagNuclear(this,(uint)(*(int *)((int)this + 0x34b) != 0));
    if (iVar2 == 0) {
      thunk_FUN_0063d410((int)this);
      thunk_FUN_0063ddb0(this,1);
      FUN_006eaaa0(*(void **)((int)this + 0x211),*(uint *)((int)this + 0x33a),0);
    }
  }
  return;
}

