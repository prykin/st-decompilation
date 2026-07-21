
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::BackBring
   
   [STSwitchEnumApplier] Switch target field_0687 uses
   /SubmarineTitans/Recovered/Enums/STBoatC_field_0687State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4 */

int __thiscall STBoatC::BackBring(STBoatC *this,int *param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  STWorldObject *this_00;
  code *pcVar4;
  int iVar5;
  
  sVar1 = this->field_066F;
  sVar2 = this->field_0673;
  sVar3 = this->field_0671;
  this->field_00B7 = 0;
  if ((((((-1 < sVar1) && (sVar1 < g_worldGrid.sizeX)) && (-1 < sVar3)) &&
       ((sVar3 < g_worldGrid.sizeY && (-1 < sVar2)))) &&
      ((sVar2 < g_worldGrid.sizeZ &&
       ((this_00 = g_worldGrid.cells
                   [(int)g_worldGrid.planeStride * (int)sVar2 + (int)g_worldGrid.sizeX * (int)sVar3
                    + (int)sVar1].objects[0], this_00 != (STWorldObject *)0x0 &&
        (*(int *)&this_00->field_0x18 == this->field_0679)))))) && (this->field_0675 == 99)) {
    thunk_FUN_004b7d50(this_00,this);
  }
  switch(this->field_0687) {
  case CASE_0:
  case CASE_1:
  case CASE_2:
  case CASE_4:
    iVar5 = sub_00460360(this);
    return iVar5;
  case CASE_3:
    iVar5 = UnLoadObj(this,2);
    return iVar5;
  }
  iVar5 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x3870,0,0,&DAT_007a4ccc,
                             s_STBoatC__BackBring_incorrect_ent_007ab604);
  if (iVar5 == 0) {
    return -1;
  }
  pcVar4 = (code *)swi(3);
  iVar5 = (*pcVar4)();
  return iVar5;
}

