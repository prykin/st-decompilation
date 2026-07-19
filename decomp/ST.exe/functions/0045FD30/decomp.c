
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
  void *this_00;
  int iVar5;
  undefined4 uVar6;
  STBoatC *pSVar7;
  
  this_00 = (void *)thunk_FUN_0042b760(CONCAT31((int3)((uint)this >> 8),this[0x24]),
                                       CONCAT22((short)((uint)in_EAX >> 0x10),
                                                *(undefined2 *)(this + 0x30)));
  if (this_00 == (void *)0x0) {
    return 0xffffffff;
  }
  if (*(int *)(this + 0xe8) == 1) {
    if (this[0x4d] == (STBoatC)0x1) {
      iVar5 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x1498,0,0,&DAT_007a4ccc,
                                 s_STBoatC__StopMove___ZONE_B_007aa0d4);
      if (iVar5 != 0) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return uVar6;
      }
    }
    *(undefined4 *)(this + 0xe8) = 0;
    thunk_FUN_004167a0((int)this);
    *(undefined4 *)(this + 0xfd) = 1;
    thunk_FUN_0040cdb0(this_00,(uint)*(ushort *)(this + 0x32));
    return 1;
  }
  if ((this[0x40] == (STBoatC)0x0) && (this[0x4d] == (STBoatC)0x0)) {
    sVar1 = *(short *)(this + 0x47);
    sVar2 = *(short *)(this + 0x4b);
    sVar3 = *(short *)(this + 0x49);
    if (((sVar1 < 0) || (((DAT_007fb240 <= sVar1 || (sVar3 < 0)) || (DAT_007fb242 <= sVar3)))) ||
       ((sVar2 < 0 || (DAT_007fb244 <= sVar2)))) {
      pSVar7 = (STBoatC *)0x0;
    }
    else {
      pSVar7 = *(STBoatC **)
                (DAT_007fb248 +
                ((uint)(byte)this[0x8e] +
                ((int)DAT_007fb246 * (int)sVar2 + (int)DAT_007fb240 * (int)sVar3 + (int)sVar1) * 2)
                * 4);
    }
    if (pSVar7 == this) {
      thunk_FUN_004167a0((int)this);
      *(undefined4 *)(this + 0xfd) = 1;
      thunk_FUN_0040cdb0(this_00,(uint)*(ushort *)(this + 0x32));
      return 1;
    }
  }
  iVar5 = thunk_FUN_00416400(this);
  if (iVar5 == -1) {
    return 0xffffffff;
  }
  if (iVar5 == 2) {
    thunk_FUN_004168b0((int)this);
  }
  return 0;
}

