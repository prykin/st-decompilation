
int __thiscall FUN_00476a10(void *this,int param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  code *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  
  if ((param_1 != 0) && (param_1 != 1)) {
    if (*(int *)((int)this + 0x5f8) != 0) {
      if (*(int *)((int)this + 0x5f8) == 1) {
        if (0xe < *(int *)((int)this + 0x7be)) {
          thunk_FUN_005fd750(*(uint *)((int)this + 0x24),*(short *)((int)this + 0x5ec) * 0xc9 + 100,
                             *(short *)((int)this + 0x5ee) * 0xc9 + 100,100,
                             (uint)*(ushort *)((int)this + 0x32),0xf);
          *(int *)((int)this + 0x7be) = *(int *)((int)this + 0x7be) + -0xf;
          iVar5 = (**(code **)(*(int *)this + 0xd8))();
          return -(uint)(iVar5 != 0);
        }
        thunk_FUN_005fd750(*(uint *)((int)this + 0x24),*(short *)((int)this + 0x5ec) * 0xc9 + 100,
                           *(short *)((int)this + 0x5ee) * 0xc9 + 100,100,
                           (uint)*(ushort *)((int)this + 0x32),*(int *)((int)this + 0x7be));
        *(undefined4 *)((int)this + 0x7be) = 0;
      }
      iVar5 = (**(code **)(*(int *)this + 0xd8))();
      return -(uint)(iVar5 != 0);
    }
    iVar5 = thunk_FUN_0045ff50(this,2);
    if (iVar5 == -1) {
      iVar5 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x3184,0,0,&DAT_007a4ccc,
                                 s_STBoatC__DCBomb__DCBOMB_MOVE_err_007ab10c);
      if (iVar5 == 0) {
        return 0xffff;
      }
      pcVar4 = (code *)swi(3);
      iVar5 = (*pcVar4)();
      return iVar5;
    }
    if (iVar5 == 0) {
      *(undefined4 *)((int)this + 0x5f8) = 1;
    }
    else if (iVar5 == 3) {
      iVar5 = thunk_FUN_004926c0((int)this);
      if (iVar5 != 1) {
        return 0;
      }
      sVar1 = *(short *)((int)this + 0x5f6);
      sVar2 = *(short *)((int)this + 0x5f4);
      sVar3 = *(short *)((int)this + 0x5f2);
      goto LAB_00476c07;
    }
    return 2;
  }
  puVar6 = (undefined4 *)((int)this + 0x2cc);
  for (iVar5 = 0x17; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined4 *)((int)this + 0x2c4) = 0;
  if (0 < *(int *)((int)this + 0x7be)) {
    *(undefined2 *)((int)this + 0x5ec) = *(undefined2 *)((int)this + 0x3e2);
    *(undefined2 *)((int)this + 0x5ee) = *(undefined2 *)((int)this + 0x3e4);
    *(undefined2 *)((int)this + 0x5f0) = *(undefined2 *)((int)this + 0x3e6);
    iVar5 = thunk_FUN_004926c0((int)this);
    if (iVar5 == 1) {
      sVar1 = *(short *)((int)this + 0x5f6);
      sVar2 = *(short *)((int)this + 0x5f4);
      sVar3 = *(short *)((int)this + 0x5f2);
      *(undefined4 *)((int)this + 0x5f8) = 0;
LAB_00476c07:
      thunk_FUN_00481520(this,(int)sVar3,(int)sVar2,(int)sVar1);
      iVar5 = thunk_FUN_0045ff50(this,0);
      return (-(uint)(iVar5 != -1) & 3) - 1;
    }
  }
  return 0;
}

