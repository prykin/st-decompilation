
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::StopMove */

undefined4 __thiscall STBoatC::StopMove(STBoatC *this,void *param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  code *pcVar4;
  undefined4 in_EAX;
  STGroupBoatC *this_00;
  int iVar5;
  undefined4 uVar6;
  STBoatC *pSVar7;
  
  this_00 = thunk_FUN_0042b760(CONCAT31((int3)((uint)this >> 8),this->field_0x24),
                               CONCAT22((short)((uint)in_EAX >> 0x10),this->field_0030));
  if (this_00 == (STGroupBoatC *)0x0) {
    return 0xffffffff;
  }
  if (*(int *)&this->field_0xe8 == 1) {
    if (this->field_004D == '\x01') {
      iVar5 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x1498,0,0,&DAT_007a4ccc,
                                 s_STBoatC__StopMove___ZONE_B_007aa0d4);
      if (iVar5 != 0) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return uVar6;
      }
    }
    *(undefined4 *)&this->field_0xe8 = 0;
    thunk_FUN_004167a0((AnonShape_004167A0_C6E28A87 *)this);
    this->field_00FD = 1;
    thunk_FUN_0040cdb0(this_00,(uint)(ushort)this->field_0032);
    return 1;
  }
  if ((this->field_0x40 == '\0') && (this->field_004D == '\0')) {
    sVar1 = this->field_0047;
    sVar2 = this->field_004B;
    sVar3 = this->field_0049;
    if (((sVar1 < 0) || (((SHORT_007fb240 <= sVar1 || (sVar3 < 0)) || (SHORT_007fb242 <= sVar3))))
       || ((sVar2 < 0 || (SHORT_007fb244 <= sVar2)))) {
      pSVar7 = (STBoatC *)0x0;
    }
    else {
      pSVar7 = (STBoatC *)
               g_worldCells
               [(int)SHORT_007fb246 * (int)sVar2 + (int)SHORT_007fb240 * (int)sVar3 + (int)sVar1].
               objects[(byte)this->field_008E];
    }
    if (pSVar7 == this) {
      thunk_FUN_004167a0((AnonShape_004167A0_C6E28A87 *)this);
      this->field_00FD = 1;
      thunk_FUN_0040cdb0(this_00,(uint)(ushort)this->field_0032);
      return 1;
    }
  }
  iVar5 = thunk_FUN_00416400((STJellyGunC *)this);
  if (iVar5 == -1) {
    return 0xffffffff;
  }
  if (iVar5 == 2) {
    thunk_FUN_004168b0((int)this);
  }
  return 0;
}

