
undefined4 __thiscall FUN_004ea460(void *this,int param_1,AnonShape_004EA460_7CF77153 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;

  if (((*(int *)((int)this + 0x245) == 4) && (*(int *)((int)this + 0x46c) == 0)) &&
     ((param_2 != (AnonShape_004EA460_7CF77153 *)0x0 ||
      (iVar3 = FUN_006e62d0(g_playSystem_00802A38,param_1,(int *)&param_2), iVar3 == 0)))) {
    *(undefined4 *)((int)this + 0x46c) = 1;
    *(int *)((int)this + 0x470) = param_1;
    *(undefined4 *)((int)this + 0x48c) = 0;
    *(undefined4 *)((int)this + 0x494) = 0;
    uVar1 = param_2->field_05B0;
    *(undefined4 *)((int)this + 0x474) = uVar1;
    uVar2 = param_2->field_05B4;
    *(undefined4 *)((int)this + 0x478) = uVar2;
    iVar3 = param_2->field_05B8;
    *(int *)((int)this + 0x47c) = iVar3;
    TLOBaseTy::sub_004C6C70(this,uVar1,uVar2,iVar3 + 1);
  }
  return 0;
}

