
void __thiscall FUN_0063d100(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  int local_20 [7];
  
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
  piVar4 = (int *)((int)param_1 + 0x152);
  if (*(int *)((int)this + 0x336) != 0) {
    uVar1 = FUN_006b0060((uint *)0x0,(uint *)((int)param_1 + 0x156));
    *(undefined4 *)((int)this + 0x336) = uVar1;
    piVar4 = (int *)((int)param_1 + 0x156 + *piVar4);
  }
  local_20[0] = FUN_006aac70(0x44);
  iVar2 = 0;
  do {
    *(undefined4 *)(iVar2 + local_20[0]) = DAT_00806774;
    iVar2 = iVar2 + 4;
  } while (iVar2 < 0x44);
  local_20[1] = 0;
  local_20[2] = 0;
  local_20[3] = 0;
  local_20[4] = 0;
  local_20[5] = 0x10;
  local_20[6] = 0;
  STT3DSprC::RestoreSpr((STT3DSprC *)((int)this + 0x1d5),local_20,piVar4);
  thunk_FUN_00416240(this,*(undefined2 *)((int)this + 0x266),*(undefined2 *)((int)this + 0x26a),
                     *(undefined2 *)((int)this + 0x26e));
  FUN_006ab060(local_20);
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

