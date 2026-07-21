
void FUN_004407a0(int param_1,undefined4 param_2,undefined4 param_3)

{
  DArrayTy *array;
  dword dVar1;
  uint index;
  
  array = g_playerRuntime[(char)param_1].groups;
  if (((array != (DArrayTy *)0x0) && (dVar1 = array->count, dVar1 != 0)) &&
     (index = 0, 0 < (int)dVar1)) {
    do {
      DArrayGetElement(array,index,&param_1);
      if (param_1 != 0) {
        STGroupBoatC::ReMakePVecAndTgtListExt((STGroupBoatC *)param_1,(char)param_2,(short)param_3);
      }
      index = index + 1;
    } while ((int)index < (int)dVar1);
  }
  return;
}

