
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::DCBomb */

int __thiscall STBoatC::DCBomb(STBoatC *this,int param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  undefined2 uVar4;
  code *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if ((param_1 != 0) && (param_1 != 1)) {
    if (this->field_05F8 != 0) {
      if (this->field_05F8 == 1) {
        if (0xe < *(int *)&this->field_0x7be) {
          thunk_FUN_005fd750(*(uint *)&this->field_0x24,*(short *)&this->field_05EC * 0xc9 + 100,
                             *(short *)((int)&this->field_05EC + 2) * 0xc9 + 100,100,
                             (uint)(ushort)this->field_0032,0xf);
          *(int *)&this->field_0x7be = *(int *)&this->field_0x7be + -0xf;
          iVar6 = (*this->vtable->vfunc_D8)();
          return -(uint)(iVar6 != 0);
        }
        thunk_FUN_005fd750(*(uint *)&this->field_0x24,*(short *)&this->field_05EC * 0xc9 + 100,
                           *(short *)((int)&this->field_05EC + 2) * 0xc9 + 100,100,
                           (uint)(ushort)this->field_0032,*(int *)&this->field_0x7be);
        *(undefined4 *)&this->field_0x7be = 0;
      }
      iVar6 = (*this->vtable->vfunc_D8)();
      return -(uint)(iVar6 != 0);
    }
    iVar6 = thunk_FUN_0045ff50(this,2);
    if (iVar6 == -1) {
      iVar6 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x3184,0,0,&DAT_007a4ccc,
                                 s_STBoatC__DCBomb__DCBOMB_MOVE_err_007ab10c);
      if (iVar6 == 0) {
        return 0xffff;
      }
      pcVar5 = (code *)swi(3);
      iVar6 = (*pcVar5)();
      return iVar6;
    }
    if (iVar6 == 0) {
      this->field_05F8 = 1;
    }
    else if (iVar6 == 3) {
      iVar6 = thunk_FUN_004926c0((int)this);
      if (iVar6 != 1) {
        return 0;
      }
      sVar1 = this->field_05F6;
      sVar2 = *(short *)&this->field_0x5f4;
      sVar3 = *(short *)&this->field_0x5f2;
      goto LAB_00476c07;
    }
    return 2;
  }
  puVar7 = &this->field_02CC;
  for (iVar6 = 0x17; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  this->field_02C4 = 0;
  if (0 < *(int *)&this->field_0x7be) {
    uVar4 = *(undefined2 *)&this->field_0x3e6;
    *(undefined2 *)&this->field_05EC = *(undefined2 *)&this->field_0x3e2;
    *(undefined2 *)((int)&this->field_05EC + 2) = *(undefined2 *)&this->field_0x3e4;
    *(undefined2 *)&this->field_0x5f0 = uVar4;
    iVar6 = thunk_FUN_004926c0((int)this);
    if (iVar6 == 1) {
      sVar1 = this->field_05F6;
      sVar2 = *(short *)&this->field_0x5f4;
      sVar3 = *(short *)&this->field_0x5f2;
      this->field_05F8 = 0;
LAB_00476c07:
      thunk_FUN_00481520(this,(int)sVar3,(int)sVar2,(int)sVar1);
      iVar6 = thunk_FUN_0045ff50(this,0);
      return (-(uint)(iVar6 != -1) & 3) - 1;
    }
  }
  return 0;
}

