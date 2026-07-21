
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::GenSwitch */

void __thiscall STGroupBoatC::GenSwitch(STGroupBoatC *this,int param_1)

{
  uint uVar1;
  code *pcVar2;
  STGameObjC *this_00;
  int iVar3;
  uint index;
  undefined4 extraout_EDX;
  uint uVar4;
  uint local_8;
  
  uVar4 = 0;
  uVar1 = *(uint *)(this->field_0029 + 0xc);
  if (uVar1 != 0) {
    index = 0;
    do {
      DArrayGetElement((DArrayTy *)this->field_0029,index,&local_8);
      if ((short)local_8 != -1) {
        this_00 = STAllPlayersC::GetObjPtr
                            (g_sTAllPlayers_007FA174,
                             CONCAT31((int3)((uint)extraout_EDX >> 8),this->field_0024),local_8,
                             CASE_1);
        if (this_00 == (STGameObjC *)0x0) {
          iVar3 = ReportDebugMessage(s_E____titans_wlad_to_grpb_cpp_007abe3c,0x1742,0,0,
                                     &DAT_007a4ccc,s_STGroupBoatC__GenSwitch_NULL_007ac540);
          if (iVar3 != 0) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          RaiseInternalException
                    (-0x5001fffc,g_overwriteContext_007ED77C,s_E____titans_wlad_to_grpb_cpp_007abe3c
                     ,0x1743);
        }
        iVar3 = (*this_00->vtable->vfunc_2C)();
        if ((iVar3 == 0x16) || (iVar3 = (*this_00->vtable->vfunc_2C)(), iVar3 == 0x25)) {
          thunk_FUN_00494160(this_00,param_1);
        }
      }
      uVar4 = uVar4 + 1;
      index = uVar4 & 0xffff;
    } while (index < uVar1);
  }
  return;
}

