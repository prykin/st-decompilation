
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\Tc_gobj.cpp
   STGameObjC::MoveStep */

undefined4 __thiscall STGameObjC::MoveStep(STGameObjC *this,int *param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 extraout_EDX;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if (this->field_00E8 == 1) {
    thunk_FUN_00417830((AnonShape_00417830_9254190A *)this);
    return 0;
  }
  iVar5 = thunk_FUN_00416400((STJellyGunC *)this);
  if (iVar5 == 1) {
    return 0;
  }
  if (iVar5 == 2) {
    thunk_FUN_00416840(this,(undefined2 *)&local_10,(undefined2 *)&local_c,(undefined2 *)&local_8);
    iVar5 = (**(code **)(this->field_0000 + 0x18))(local_10,local_c,local_8);
    if (iVar5 != 1) {
      *(short *)&this->field_0xfa = *(short *)&this->field_0xfa + 1;
      if (*(short *)&this->field_0xfa <= (short)this->field_00F8) {
        return 0;
      }
      *(int *)&this->field_0xd7 = (int)(short)local_10;
      *(int *)&this->field_0xdb = (int)(short)local_c;
      *(int *)&this->field_0xdf = (int)(short)local_8;
      *(undefined2 *)&this->field_0xfa = 0;
      thunk_FUN_004167a0((AnonShape_004167A0_C6E28A87 *)this);
      return 2;
    }
    uVar6 = thunk_FUN_0041c5a0((AnonShape_0041C5A0_167218F4 *)this);
    *(undefined2 *)&this->field_0xfa = 0;
    iVar5 = thunk_FUN_00495ff0(*(short *)&this->field_0x5b,*(short *)&this->field_0x5d,
                               *(short *)&this->field_0x5f,
                               CONCAT31((int3)((uint)uVar6 >> 8),this->field_0x8e),
                               (AnonShape_00495FF0_59081BDD *)this);
    if ((iVar5 == 0) &&
       (iVar5 = DumpClassC::WritePtr
                          ((short)local_10,(short)local_c,(short)local_8,
                           CONCAT31((int3)((uint)extraout_EDX >> 8),this->field_0x8e),
                           (AnonShape_00495EC0_95A268C6 *)this), iVar5 == 0)) {
      thunk_FUN_0041c3f0(this,*(undefined **)&this->field_0x101);
      thunk_FUN_004168b0((int)this);
      return 0;
    }
  }
  else if (iVar5 == 3) {
    thunk_FUN_00416840(this,(undefined2 *)&local_10,(undefined2 *)&local_c,(undefined2 *)&local_8);
    uVar7 = thunk_FUN_00418d20(*(short *)&this->field_0x47,*(short *)&this->field_0x49,
                               *(short *)&this->field_0x4b,(short)local_10,(short)local_c,
                               (short)local_8);
    if (uVar7 != 0xffffffff) {
      if (uVar7 == 1) {
        iVar2 = *(int *)&this->field_0x9b;
        iVar3 = *(int *)&this->field_0x97;
        iVar5 = iVar3 + iVar2 * 8;
        local_10 = CONCAT22((short)((uint)iVar2 >> 0x10),*(undefined2 *)(iVar3 + -8 + iVar2 * 8));
        local_c = CONCAT22((short)((uint)iVar3 >> 0x10),*(undefined2 *)(iVar5 + -6));
        local_8 = CONCAT22((short)((uint)iVar5 >> 0x10),*(undefined2 *)(iVar5 + -4));
        *(undefined4 *)&this->field_0xe4 = 0;
        this->field_0xe3 = 0;
        thunk_FUN_004167a0((AnonShape_004167A0_C6E28A87 *)this);
        iVar5 = thunk_FUN_00418030(this,(short)local_10,(short)local_c,(short)local_8);
        if (iVar5 == -1) {
          return 0xffffffff;
        }
        if (iVar5 == 0) {
          return 0;
        }
        if (iVar5 == 2) {
          return 2;
        }
      }
      uVar1 = *(ushort *)(*(int *)&this->field_0x97 + 6 + *(int *)&this->field_0xd3 * 8);
      if (((uVar1 & 0xfff) != 0xffe) && (uVar1 != *(ushort *)&this->field_0x6c)) {
        thunk_FUN_00417740(this,*(ushort *)&this->field_0x6c,uVar1);
      }
      thunk_FUN_004168b0((int)this);
      return 0;
    }
    iVar5 = ReportDebugMessage(s_E____titans_wlad_Tc_gobj_cpp_007a4e0c,0x33f,0,0,&DAT_007a4ccc,
                               s_STGameObjC__MoveStep_far_cells_007a4e30);
    if (iVar5 != 0) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return uVar6;
    }
  }
  else if (iVar5 == 0) {
    thunk_FUN_004167a0((AnonShape_004167A0_C6E28A87 *)this);
    return 1;
  }
  return 0xffffffff;
}

