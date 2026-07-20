
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::BackPatrol */

int __thiscall STBoatC::BackPatrol(STBoatC *this,int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  if (this->field_0497 == 0) {
    iVar2 = sub_00460360(this);
    return iVar2;
  }
  if (this->field_0497 == 1) {
    iVar2 = thunk_FUN_004620f0((int *)this);
    return iVar2;
  }
  iVar2 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x1c52,0,0,&DAT_007a4ccc,
                             s_STBoatC__BackPatrol_007aa23c);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  return -1;
}

