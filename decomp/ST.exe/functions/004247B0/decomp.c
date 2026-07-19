
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\tc_grp.cpp
   STGroupC::SetAVPar */

void __thiscall STGroupC::SetAVPar(STGroupC *this,uint param_1)

{
  uint uVar1;
  code *pcVar2;
  void *this_00;
  int iVar3;
  undefined4 extraout_ECX;
  uint uVar4;
  uint uVar5;
  
  uVar5 = 0;
  uVar1 = *(uint *)(this->field_0029 + 0xc);
  this->field_0039 = param_1;
  if (uVar1 != 0) {
    uVar4 = 0;
    do {
      FUN_006acc70(this->field_0029,uVar4,&param_1);
      if ((short)param_1 != -1) {
        this_00 = (void *)STAllPlayersC::GetObjPtr
                                    (DAT_007fa174,
                                     CONCAT31((int3)((uint)extraout_ECX >> 8),this->field_0024),
                                     param_1,CASE_1);
        if (this_00 == (void *)0x0) {
          iVar3 = ReportDebugMessage(s_E____titans_wlad_tc_grp_cpp_007a50a4,0x256,0,0,&DAT_007a4ccc,
                                     s_STGroupC__SetAVPar_007a51a4);
          if (iVar3 != 0) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          RaiseInternalException
                    (-0x5001fffc,DAT_007ed77c,s_E____titans_wlad_tc_grp_cpp_007a50a4,599);
        }
        if (*(int *)((int)this_00 + 0x20) == 0x14) {
          thunk_FUN_004956c0(this_00,this->field_0039);
        }
      }
      uVar5 = uVar5 + 1;
      uVar4 = uVar5 & 0xffff;
    } while (uVar4 < uVar1);
  }
  return;
}

