
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::BackTeleport */

int __thiscall STBoatC::BackTeleport(STBoatC *this,int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  this->field_00B7 = 0;
  switch(*(undefined4 *)&this->field_0x663) {
  case 0:
  case 1:
  case 7:
    iVar2 = sub_00460360(this);
    return iVar2;
  case 2:
    thunk_FUN_00493bc0((int)this);
    iVar2 = sub_00460360(this);
    return iVar2;
  case 3:
  case 4:
  case 5:
  case 6:
    iVar2 = Teleport(this,2);
    return iVar2;
  }
  iVar2 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x3771,0,0,&DAT_007a4ccc,
                             s_STBoatC__BackTeleport_incorrect_e_007ab52c);
  if (iVar2 == 0) {
    return -1;
  }
  pcVar1 = (code *)swi(3);
  iVar2 = (*pcVar1)();
  return iVar2;
}

