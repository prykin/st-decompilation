
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::BackUnLoadObj */

int __thiscall STBoatC::BackUnLoadObj(STBoatC *this,int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x5d6);
  if ((iVar2 == 0) || (iVar2 == 1)) {
    iVar2 = (**(code **)(*(int *)this + 0xd8))();
    return -(uint)(iVar2 != 0);
  }
  if (iVar2 == 2) {
    iVar2 = UnLoadObj(this,(undefined4 *)0x2);
    return iVar2;
  }
  if (iVar2 == 5) {
    iVar2 = (**(code **)(*(int *)this + 0x20))();
    return iVar2;
  }
  iVar2 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x30fa,0,0,&DAT_007a4ccc,
                             s_STBoatC__BackUnLoadObj_007ab0c4);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  return 2;
}

