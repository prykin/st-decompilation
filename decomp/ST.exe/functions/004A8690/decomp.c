#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::GenSwitch

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall STGroupBoatC::GenSwitch(STGroupBoatC *this,int param_1)

{
  uint uVar1;
  STGameObjC *this_00;
  int iVar3;
  uint index;
  uint uVar4;
  undefined1 local_8 [4];

  uVar4 = 0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  uVar1 = *(uint *)(this->field_0029 + 0xc);
  if (uVar1 != 0) {
    index = 0;
    do {
      DArrayGetElement((DArrayTy *)this->field_0029,index,local_8);
      if (STPiece<0,2>(local_8) != 0xffff) {
        this_00 = STAllPlayersC::GetObjPtr
                            (g_allPlayers_007FA174,this->field_0024,STPiece<0,2>(local_8),CASE_1);
        if (this_00 == nullptr) {
          iVar3 = ReportDebugMessage("E:\\__titans\\wlad\\to_grpb.cpp",0x1742,0,0,
                                     "%s","STGroupBoatC::GenSwitch NULL");
          if (iVar3 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          RaiseInternalException
                    (-0x5001fffc,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp"
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

