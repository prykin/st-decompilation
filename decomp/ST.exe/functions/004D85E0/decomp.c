
/* [STAbiConsistencyApplier] pointer_return_element_width target=return:-1: return=/uint *32
   Evidence: generic returned address is dereferenced with one consistent machine width across
   callers; width=4, sites=004AE0B0 @ 004AE463 MOV EDX,dword ptr [EAX] | 004E0040 @ 004E0099 MOV
   EAX,dword ptr [EDI] | 004E0040 @ 004E00F7 MOV EAX,dword ptr [EDI + 0x259] | 004E0250 @ 004E028D
   MOV EAX,dword ptr [EDI] | 004E0250 @ 004E02EE MOV EAX,dword ptr [EDI + 0x259] */

uint * FUN_004d85e0(int param_1,int param_2,int param_3)

{
  int iVar1;
  STFishC *local_10;
  short local_a;
  short local_8;
  short local_6;

  if (g_array_007FA150 != (DArrayTy *)0x0) {
    g_array_007FA150->iteratorIndex = 0;
    iVar1 = DArrayGetNext(g_array_007FA150,(byte *)&local_10);
    while (-1 < iVar1) {
      if ((((local_10 != (STFishC *)0x0) &&
           (STFishC::sub_004162B0(local_10,&local_6,&local_8,&local_a), local_6 == param_1)) &&
          (local_8 == param_2)) && (local_a == param_3)) {
        return (uint *)local_10;
      }
      iVar1 = DArrayGetNext(g_array_007FA150,(byte *)&local_10);
    }
  }
  return (uint *)0x0;
}

