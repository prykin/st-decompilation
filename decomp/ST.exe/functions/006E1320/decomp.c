
void __thiscall
FUN_006e1320(void *this,double *param_1,double *param_2,int *param_3,int *param_4,int *param_5)

{
  double dVar1;
  int local_40;
  int local_3c;
  int local_38;
  int local_30;
  int local_2c;
  int local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  double local_14;
  double local_c;
  
  local_c = *(double *)((int)this + 0x98);
  local_14 = *(double *)((int)this + 0xa0);
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  FUN_006e25d0(this,&local_40);
  Library::Ourlib::STREND::FUN_006dd050(this,*(uint *)((int)this + 0xa8),*param_1,*param_2);
  dVar1 = local_14;
  *(undefined4 *)param_1 = *(undefined4 *)((int)this + 0x98);
  *(undefined4 *)((int)param_1 + 4) = *(undefined4 *)((int)this + 0x9c);
  *(undefined4 *)param_2 = *(undefined4 *)((int)this + 0xa0);
  *(undefined4 *)((int)param_2 + 4) = *(undefined4 *)((int)this + 0xa4);
  FUN_006e25d0(this,&local_30);
  *param_3 = (local_30 - local_40) + 0x8000 >> 0x10;
  *param_4 = (local_2c - local_3c) + 0x8000 >> 0x10;
  if (param_5 != (int *)0x0) {
    *param_5 = local_28 - local_38;
  }
  Library::Ourlib::STREND::FUN_006dd050(this,*(uint *)((int)this + 0xa8),local_c,dVar1);
  return;
}

