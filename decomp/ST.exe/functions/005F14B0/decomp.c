
int __thiscall
FUN_005f14b0(void *this,short param_1,short param_2,short param_3,byte param_4,short param_5)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  short *psVar4;
  short local_20;
  short local_1e;
  short local_1c;
  byte local_1a;
  short local_19;
  undefined4 local_17;
  undefined4 *local_13;
  int local_f;
  
  if (*(int *)((int)this + 0x38) == 0) {
    puVar1 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0x19,10);
    *(uint **)((int)this + 0x38) = puVar1;
    if (puVar1 == (uint *)0x0) {
      return -1;
    }
  }
  psVar4 = &local_20;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    psVar4[0] = 0;
    psVar4[1] = 0;
    psVar4 = psVar4 + 2;
  }
  *(undefined1 *)psVar4 = 0;
  local_1c = param_3;
  local_1e = param_2;
  local_20 = param_1;
  local_19 = param_5;
  local_1a = param_4;
  local_f = DAT_00811788;
  local_17 = PTR_00802a38->field_00E4;
  local_13 = thunk_FUN_005f1e40((uint)param_4,(int)param_5,(int)(short)(param_1 * 0xc9 + 100),
                                (int)(short)(param_2 * 0xc9 + 100),(int)(short)(param_3 * 200 + 100)
                               );
  if (local_13 == (undefined4 *)0x0) {
    iVar3 = -1;
  }
  else {
    uVar2 = Library::DKW::TBL::FUN_006ae1c0(*(uint **)((int)this + 0x38),(undefined4 *)&local_20);
    iVar3 = uVar2 + 1;
    if (-1 < iVar3) {
      DAT_00811788 = DAT_00811788 + 1;
      return iVar3;
    }
  }
  return iVar3;
}

