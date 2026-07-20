
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::SetNewMD
   
   [STPrototypeApplier] Propagated return.
   Evidence: 0048D130 returns return of FUN_004e1690 @ 0048D2CC | 0048D130 returns return of
   FUN_004e1690 @ 0048D39C */

bool __thiscall
STBoatC::SetNewMD(STBoatC *this,int param_1,short param_2,short param_3,short param_4,int param_5,
                 undefined4 param_6)

{
  short sVar1;
  short sVar2;
  short sVar3;
  STWorldObject *pSVar4;
  code *pcVar5;
  undefined1 uVar6;
  bool bVar7;
  STWorldObject *in_EAX;
  int iVar8;
  STWorldObject *extraout_EAX;
  uint uVar9;
  
  if ((param_5 != -1) &&
     ((((param_2 < 0 || (SHORT_007fb240 <= param_2)) || (param_3 < 0)) ||
      (((SHORT_007fb242 <= param_3 || (param_4 < 0)) ||
       ((SHORT_007fb244 <= param_4 ||
        ((in_EAX = g_worldCells
                   [(int)SHORT_007fb246 * (int)param_4 + (int)SHORT_007fb240 * (int)param_3 +
                    (int)param_2].objects[0], in_EAX == (STWorldObject *)0x0 ||
         (*(int *)&in_EAX->field_0x18 != param_5)))))))))) {
    iVar8 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x4bcc,0,0,&DAT_007a4ccc,
                               s_STBoatC__SetNewMD_007aba24);
    if (iVar8 != 0) {
      pcVar5 = (code *)swi(3);
      uVar6 = (*pcVar5)();
      return (bool)uVar6;
    }
    RaiseInternalException
              (0,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x4bcd);
    in_EAX = extraout_EAX;
  }
  uVar6 = (char)in_EAX;
  if (param_1 == 1) {
    if (this->field_04A1 != param_5) {
      sVar1 = this->field_049B;
      uVar6 = (undefined1)sVar1;
      sVar2 = this->field_049F;
      sVar3 = this->field_049D;
      if (((-1 < sVar1) && (sVar1 < SHORT_007fb240)) &&
         ((-1 < sVar3 && (((sVar3 < SHORT_007fb242 && (-1 < sVar2)) && (sVar2 < SHORT_007fb244))))))
      {
        uVar9 = (uint)sVar1;
        pSVar4 = g_worldCells
                 [(int)SHORT_007fb246 * (int)sVar2 + (int)SHORT_007fb240 * (int)sVar3 + uVar9].
                 objects[0];
        if (pSVar4 != (STWorldObject *)0x0) {
          thunk_FUN_004e18e0(pSVar4,this->field_0018);
          bVar7 = thunk_FUN_004e1690(pSVar4,this->field_0018);
          uVar9 = (uint)bVar7;
        }
        uVar6 = (undefined1)uVar9;
      }
      this->field_04A1 = param_5;
      this->field_04BD = 1;
      if (param_5 != -1) {
        this->field_049B = param_2;
        this->field_049D = param_3;
        this->field_049F = param_4;
        this->field_04B5 = param_6;
        return SUB21(param_4,0);
      }
    }
  }
  else if (this->field_04AB != param_5) {
    sVar1 = this->field_04A5;
    uVar6 = (undefined1)sVar1;
    sVar2 = this->field_04A9;
    sVar3 = this->field_04A7;
    if (((((-1 < sVar1) && (sVar1 < SHORT_007fb240)) && (-1 < sVar3)) &&
        ((sVar3 < SHORT_007fb242 && (-1 < sVar2)))) && (sVar2 < SHORT_007fb244)) {
      uVar9 = (uint)sVar1;
      pSVar4 = g_worldCells
               [(int)SHORT_007fb246 * (int)sVar2 + (int)SHORT_007fb240 * (int)sVar3 + uVar9].objects
               [0];
      if (pSVar4 != (STWorldObject *)0x0) {
        thunk_FUN_004e18e0(pSVar4,this->field_0018);
        bVar7 = thunk_FUN_004e1690(pSVar4,this->field_0018);
        uVar9 = (uint)bVar7;
      }
      uVar6 = (undefined1)uVar9;
    }
    this->field_04AB = param_5;
    *(undefined4 *)&this->field_0x4c1 = 1;
    if (param_5 != -1) {
      this->field_04A5 = param_2;
      this->field_04A7 = param_3;
      this->field_04A9 = param_4;
      *(undefined4 *)&this->field_0x4b9 = param_6;
      uVar6 = SUB21(param_4,0);
    }
  }
  return (bool)uVar6;
}

