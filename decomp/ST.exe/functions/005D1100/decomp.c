
/* Recovered from embedded debug metadata:
   E:\__titans\Start\settmobj.cpp
   SettMapMTy::AddPlayerList */

void __thiscall
SettMapMTy::AddPlayerList(SettMapMTy *this,int param_1,uint param_2,int param_3,char *param_4)

{
  byte bVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  SettMapMTy *this_00;
  int iVar5;
  AnonShape_005D00B0_9E7CC102 *pAVar6;
  int iVar7;
  char *pcVar8;
  uint uVar9;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_4c;
  SettMapMTy *local_8;
  
  if (this->field_1F84 != 0) {
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    local_8 = this;
    iVar5 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
    this_00 = local_8;
    if (iVar5 == 0) {
      iVar5 = local_8->field_1F84;
      if (param_2 < *(uint *)(iVar5 + 0xc)) {
        pAVar6 = (AnonShape_005D00B0_9E7CC102 *)
                 (*(int *)(iVar5 + 8) * param_2 + *(int *)(iVar5 + 0x1c));
      }
      else {
        pAVar6 = (AnonShape_005D00B0_9E7CC102 *)0x0;
      }
      if (pAVar6 != (AnonShape_005D00B0_9E7CC102 *)0x0) {
        bVar1 = pAVar6->field_0x4;
        if (bVar1 == 1) {
          if (param_3 != 2) goto LAB_005d11ad;
          param_3 = 2;
        }
        else {
          if ((bVar1 < 2) || (3 < bVar1)) goto LAB_005d11ad;
          param_2 = param_2 + 1;
          thunk_FUN_005d00b0(local_8,pAVar6,param_2);
        }
        ChangePlayerList(this_00,param_1,param_2,param_3,'\0',param_4);
      }
LAB_005d11ad:
      if ((DAT_0080877e != '\0') && (this_00->field_1E26 == CASE_C)) {
        iVar5 = this_00->field_1F84;
        uVar9 = 0;
        bVar4 = true;
        uVar2 = *(uint *)(iVar5 + 0xc);
        if (uVar2 != 0) {
          if (uVar2 == 0) {
            iVar7 = 0;
            goto LAB_005d11ee;
          }
          do {
            iVar7 = *(int *)(iVar5 + 8) * uVar9 + *(int *)(iVar5 + 0x1c);
LAB_005d11ee:
            if ((((iVar7 != 0) && (DAT_0080874d == *(char *)(iVar7 + 2))) &&
                (DAT_0080874e == *(char *)(iVar7 + 3))) && (*(int *)(iVar7 + 6) == DAT_0080877f)) {
              bVar4 = false;
              break;
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 < uVar2);
        }
        if ((bVar4) && (uVar9 = 0, uVar2 != 0)) {
          if (uVar2 == 0) {
            iVar7 = 0;
            goto LAB_005d1245;
          }
          while( true ) {
            iVar7 = *(int *)(iVar5 + 8) * uVar9 + *(int *)(iVar5 + 0x1c);
LAB_005d1245:
            if (((iVar7 != 0) && (DAT_0080874d == *(char *)(iVar7 + 2))) &&
               (DAT_0080874e == *(char *)(iVar7 + 3))) break;
            uVar9 = uVar9 + 1;
            if (uVar2 <= uVar9) {
              g_currentExceptionFrame = local_4c.previous;
              return;
            }
          }
          pcVar8 = &DAT_00807e1d;
          if (DAT_008067a0 == '\0') {
            pcVar8 = (char *)&DAT_00807ddd;
          }
          AddPlayerList(local_8,DAT_0080877f,uVar9,(DAT_0080874f != '\0') + 2,pcVar8);
        }
      }
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;
    iVar7 = ReportDebugMessage(s_E____titans_Start_settmobj_cpp_007cd258,0x62f,0,iVar5,&DAT_007a4ccc
                               ,s_SettMapMTy__AddPlayerList_007cd4c4);
    if (iVar7 != 0) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    RaiseInternalException(iVar5,0,s_E____titans_Start_settmobj_cpp_007cd258,0x62f);
  }
  return;
}

