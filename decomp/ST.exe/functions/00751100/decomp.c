
int FUN_00751100(uint *param_1,ushort *param_2)

{
  int iVar1;
  
  iVar1 = Library::DKW::DB::FUN_00753ea0(*param_1,param_2,&param_2);
  if ((iVar1 == 0) && (param_2 != (ushort *)0x0)) {
    FUN_00753ce0(param_1[1],(uint)param_2);
  }
  return iVar1;
}

