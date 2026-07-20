
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::CheckForReplenisher */

undefined4 __thiscall STBoatC::CheckForReplenisher(STBoatC *this,int param_1)

{
  AnonShape_006ACC70_C8641025 *pAVar1;
  DArrayTy *pDVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint local_14;
  STFishC *local_10;
  short local_a;
  short local_8;
  short local_6;
  
  pAVar1 = (AnonShape_006ACC70_C8641025 *)g_playerRuntime[*(int *)&this->field_0x24].field597_0x2e7;
  pDVar2 = g_playerRuntime[*(int *)&this->field_0x24].objects;
  if (pAVar1 != (AnonShape_006ACC70_C8641025 *)0x0) {
    uVar3 = pAVar1->field_000C;
    uVar7 = 0;
    if (0 < (int)uVar3) {
      do {
        FUN_006acc70(pAVar1,uVar7,&local_14);
        if ((short)local_14 != -1) {
          FUN_006acc70((AnonShape_006ACC70_C8641025 *)pDVar2,local_14 & 0xffff,&local_10);
          if (local_10 == (STFishC *)0x0) {
            iVar5 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x5221,0,0,
                                       &DAT_007a4ccc,s_STBoatC__CheckForReplenisher_NUL_007abbf4);
            if (iVar5 != 0) {
              pcVar4 = (code *)swi(3);
              uVar6 = (*pcVar4)();
              return uVar6;
            }
            RaiseInternalException
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       s_E____titans_wlad_To_boat_cpp_007a9d3c,0x5222);
          }
          STFishC::sub_004162B0(local_10,&local_a,&local_8,&local_6);
          iVar5 = FUN_006aadd0((int)this->field_0047,(int)this->field_0049,(int)this->field_004B,
                               (int)local_a,(int)local_8,(int)local_6);
          if (iVar5 < 7) {
            return 1;
          }
        }
        uVar7 = uVar7 + 1;
        if ((int)uVar3 <= (int)uVar7) {
          return 0;
        }
      } while( true );
    }
  }
  return 0;
}

